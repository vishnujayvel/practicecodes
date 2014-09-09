%{

/*
This is the lex file. You needed to turn in a documented package.
Your lex file did not have to be this elaborate!

 */


#define yytextout( _PREFIX ) fprintf( yyout, "%s%s\n", _PREFIX, yytext )


%}

SINGLE_COMMENT   "//".*
START_COMMENT   "/*"
END_COMMENT   "*/"

%x MULTI_COMMENT

letter   [a-zA-Z]
digit   [0-9]

/*
literals
*/

%%

{SINGLE_COMMENT}      {}
{START_COMMENT}         { BEGIN MULTI_COMMENT; }
<MULTI_COMMENT>{END_COMMENT}   { BEGIN 0; }
<MULTI_COMMENT>.      {}
<MULTI_COMMENT>\n      {}

"void"|"int"            { yytextout( "type:\t\t" ); }

"if"|"else"|"do"|"while"|"for"      { yytextout( "control:\t" ); }

"{"|"}"|"("|")"|";"|","         { yytextout( "punctuation:\t" ); }

"="               { yytextout( "assignment:\t" ); }

"!"|"||"|"&&"|"!="|"=="|"<"|">"|"<="|">=" { yytextout( "logical_op:\t" ); }

"+"|"-"|"*"|"/"|"%"         { yytextout( "numerical_op:\t" ); }

{letter}({letter}|{digit}|"_")*      { yytextout( "identifier:\t" ); }

{digit}{digit}*            { yytextout( "literal:\t" ); }

[ \t\n\r]+            {}

.               { yytextout( "other" ); }

%%


// This is needed to link, because the
// flex-generated source file externs this.
int yywrap()
{
   return 1;
}


// Main function.
// Allow arguments for input and output files.
// Default to stdin and stdout.
int main( int argc, char *argv[] )
{
   FILE *input_file  = NULL;
   FILE *output_file = NULL;

   // Allow input from a file arg.
   if( argc > 1 )
   {
      input_file = fopen( argv[ 1 ], "r" );
      if( !input_file )
      {
         fprintf( stderr, "Could not open %s!\n", argv[ 1 ] );
         return 1;
      }

      // Use the file arg as input.
      yyin = input_file;
   }

   // Allow output to a file arg.
   if( argc > 2 )
   {
      output_file = fopen( argv[ 2 ], "w" );
      if( !output_file )
      {
         fprintf( stderr, "Could not open %s!\n", argv[ 2 ] );
         return 1;
      }

      // Use the file arg as output.
      yyout = output_file;
   }

   // Start lexing!
   yylex();

   if( input_file )
   {
      fclose( input_file );
   }
   if( output_file )
   {
      fclose( output_file );
   }

   return 0;
}
