ALPHA	[A-Za-z]
DIGIT	[0-9]
%%
{ALPHA}({ALPHA}|{DIGIT}) return ID;
{DIGIT}	{
	yylval=atoi(yytext);
	return NUM;
	}
"for"	return FOR;
"("	return OB;
")"	return CB;
";"	return DEL;
"++"	return INCR;
"--"	return DECR;
"{"	return OSB;
"}"	return CSB;
"+"|"="	return OPER;
"&&"|"||" return LOGIC;
"=="	return EQ;
"<"|">"|"<="|">="|"!="	return RELOP;
[ \n\t] yyterminate();
.	return OTHER;


