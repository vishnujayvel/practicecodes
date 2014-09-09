#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#include <stdlib.h>
#include <string.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20070509

#define YYEMPTY (-1)
#define yyclearin    (yychar = YYEMPTY)
#define yyerrok      (yyerrflag = 0)
#define YYRECOVERING (yyerrflag != 0)

extern int yyparse(void);

static int yygrowstack(void);
#define YYPREFIX "yy"
#line 2 "ifelse.y"
#include <stdio.h>
#include <stdlib.h>
#line 26 "y.tab.c"
#define ID 257
#define NUM 258
#define IF 259
#define ELSE 260
#define ELSEIF 261
#define LE 262
#define GE 263
#define EQ 264
#define NE 265
#define OR 266
#define AND 267
#define UMINUS 268
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    1,    1,    1,    1,    1,    1,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    3,    3,    4,    4,    4,
};
short yylen[] = {                                         2,
    1,    5,    5,    5,    2,    2,    0,    1,    1,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    0,    3,    0,    2,    2,    0,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    5,    0,
    0,    9,    8,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   29,   26,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   21,    0,   22,    0,
   13,   12,    2,    4,    3,
};
short yydgoto[] = {                                       4,
   11,   16,    9,   36,
};
short yysindex[] = {                                   -221,
  -26,  -33,  -14,    0, -221, -239, -239, -239,    0, -239,
 -221,    0,    0,  -32,  -10,  132, -125,    2, -239, -239,
 -239, -239, -239, -239, -239, -239, -239,  -38,  -20, -239,
 -239,  -96,  -96,    0,    0, -239,  -96,  163,  163,  163,
  163,  379,  379,  153,  163,  163,    0,  -30,    0,  -30,
    0,    0,    0,    0,    0,
};
short yyrindex[] = {                                     41,
    0,    1,    0,    0,   48,   12,   12,  111,    0,   12,
   58,    0,    0,    0,    0,    0,  142,    0,  -39,  -39,
  -39,  -39,  -39,  -39,  -39,  -39,  -39,   24,   34,  -39,
  -39,    1,    1,    0,    0,  121,    1,   62,   68,   78,
   84,  -25,   39,  -17,   90,  100,    0,   46,    0,   56,
    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
   60,  423,  179,   38,
};
#define YYTABLESIZE 644
short yytable[] = {                                      35,
   27,   25,   25,   25,   47,   25,    7,   25,   32,   30,
   28,   30,   29,    6,   31,   17,   31,   12,   13,   25,
   25,   25,   25,   23,   49,   10,    8,   27,   25,   26,
   33,   30,   28,   17,   29,   17,   31,    1,    2,    3,
    7,   23,   37,   30,   28,   17,   29,    1,   31,   27,
   25,   26,   25,   25,   25,    0,   25,    6,   25,    5,
    0,   27,   25,   26,   25,   25,    0,    0,   25,    0,
   25,   25,   25,   25,   25,   25,   25,    0,    0,   18,
   25,    0,   25,   25,   25,   25,   10,    0,   10,    8,
   10,    0,   25,   25,   25,   25,   11,   18,   11,   18,
   11,    0,   15,    0,   10,   10,   10,   10,   14,    0,
    0,    0,    0,    0,   11,   11,   11,   11,   24,    0,
   15,   15,   15,   15,   16,    0,   14,   14,   14,   14,
   20,   12,   13,    0,    0,    0,   24,   24,   24,   24,
   19,    0,   16,   16,   16,   16,    0,    0,   20,   20,
   20,   20,   25,   25,    0,   25,    0,   25,   19,   19,
   19,   19,   25,   25,    0,   25,    0,   25,    0,   25,
   25,   25,   25,   30,   28,    0,   29,    0,   31,   25,
   25,   25,   25,   25,   25,    0,   25,    0,   25,    0,
   34,   27,   25,   26,   30,   28,    0,   29,    0,   31,
   25,   25,   25,   25,   30,   28,    0,   29,    0,   31,
   53,   54,   27,   25,   26,   55,    0,    0,   12,   13,
    0,    0,   25,   25,   25,   25,   25,   25,    0,   19,
   20,   21,   22,   23,   24,   30,   12,   13,    0,    0,
   17,   17,    0,    0,    0,   28,    0,    0,    0,    0,
    0,   19,   20,   21,   22,   23,   24,    0,    0,   27,
   27,   27,    0,   19,   20,   21,   22,   23,   24,    0,
    0,    0,    0,   25,   25,   25,   25,   25,   25,    0,
    0,    0,    0,    0,    0,   25,   25,   25,   25,   25,
   25,    0,    0,    0,    0,   25,   25,   25,   25,   25,
   25,    0,    0,    0,   18,   18,    0,   10,   10,   10,
   10,   10,   10,    0,    0,    0,    0,   11,   11,   11,
   11,   11,   11,   15,   15,   15,   15,   15,   15,   14,
   14,   14,   14,   14,   14,    0,    0,    0,    0,   24,
   24,   24,   24,   24,   24,   16,   16,   16,   16,   16,
   16,   20,   20,   20,   20,   20,   20,    0,    0,    0,
    0,   19,   19,   19,   19,   19,   19,    0,    0,    0,
    0,    0,   25,   25,   25,   25,   25,   25,    0,    0,
    0,    0,   25,   25,   25,   25,   25,   25,    0,    0,
    0,    0,    0,   19,   20,   21,   22,   23,   24,    0,
    0,    0,    0,   25,   25,   25,   25,   25,   25,    0,
    0,    0,    0,    0,   19,   20,   21,   22,   23,   24,
   30,   28,    0,   29,    0,   31,    0,    0,   14,   15,
    0,    0,   18,    0,    0,    0,    0,    0,   27,    0,
   26,   38,   39,   40,   41,   42,   43,   44,   45,   46,
   48,   50,   51,   52,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   19,   20,   21,   22,
};
short yycheck[] = {                                     125,
    0,   41,   42,   43,   43,   45,   40,   47,   41,   42,
   43,   42,   45,   40,   47,   41,   47,  257,  258,   59,
   60,   61,   62,   41,   45,   40,  123,   60,   61,   62,
   41,   42,   43,   59,   45,   61,   47,  259,  260,  261,
    0,   59,   41,   42,   43,    8,   45,    0,   47,   60,
   61,   62,   41,   42,   43,   -1,   45,    0,   47,    0,
   -1,   60,   61,   62,   41,   42,   -1,   -1,   45,   -1,
   47,   60,   61,   62,   41,   42,   43,   -1,   -1,   41,
   47,   -1,   59,   60,   61,   62,   41,   -1,   43,  123,
   45,   -1,   59,   60,   61,   62,   41,   59,   43,   61,
   45,   -1,   41,   -1,   59,   60,   61,   62,   41,   -1,
   -1,   -1,   -1,   -1,   59,   60,   61,   62,   41,   -1,
   59,   60,   61,   62,   41,   -1,   59,   60,   61,   62,
   41,  257,  258,   -1,   -1,   -1,   59,   60,   61,   62,
   41,   -1,   59,   60,   61,   62,   -1,   -1,   59,   60,
   61,   62,   42,   43,   -1,   45,   -1,   47,   59,   60,
   61,   62,   42,   43,   -1,   45,   -1,   47,   -1,   59,
   60,   61,   62,   42,   43,   -1,   45,   -1,   47,   59,
   60,   61,   62,   42,   43,   -1,   45,   -1,   47,   -1,
   59,   60,   61,   62,   42,   43,   -1,   45,   -1,   47,
   59,   60,   61,   62,   42,   43,   -1,   45,   -1,   47,
   32,   33,   60,   61,   62,   37,   -1,   -1,  257,  258,
   -1,   -1,  262,  263,  264,  265,  266,  267,   -1,  262,
  263,  264,  265,  266,  267,  125,  257,  258,   -1,   -1,
  266,  267,   -1,   -1,   -1,  125,   -1,   -1,   -1,   -1,
   -1,  262,  263,  264,  265,  266,  267,   -1,   -1,  259,
  260,  261,   -1,  262,  263,  264,  265,  266,  267,   -1,
   -1,   -1,   -1,  262,  263,  264,  265,  266,  267,   -1,
   -1,   -1,   -1,   -1,   -1,  262,  263,  264,  265,  266,
  267,   -1,   -1,   -1,   -1,  262,  263,  264,  265,  266,
  267,   -1,   -1,   -1,  266,  267,   -1,  262,  263,  264,
  265,  266,  267,   -1,   -1,   -1,   -1,  262,  263,  264,
  265,  266,  267,  262,  263,  264,  265,  266,  267,  262,
  263,  264,  265,  266,  267,   -1,   -1,   -1,   -1,  262,
  263,  264,  265,  266,  267,  262,  263,  264,  265,  266,
  267,  262,  263,  264,  265,  266,  267,   -1,   -1,   -1,
   -1,  262,  263,  264,  265,  266,  267,   -1,   -1,   -1,
   -1,   -1,  262,  263,  264,  265,  266,  267,   -1,   -1,
   -1,   -1,  262,  263,  264,  265,  266,  267,   -1,   -1,
   -1,   -1,   -1,  262,  263,  264,  265,  266,  267,   -1,
   -1,   -1,   -1,  262,  263,  264,  265,  266,  267,   -1,
   -1,   -1,   -1,   -1,  262,  263,  264,  265,  266,  267,
   42,   43,   -1,   45,   -1,   47,   -1,   -1,    6,    7,
   -1,   -1,   10,   -1,   -1,   -1,   -1,   -1,   60,   -1,
   62,   19,   20,   21,   22,   23,   24,   25,   26,   27,
   28,   29,   30,   31,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  262,  263,  264,  265,
};
#define YYFINAL 4
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 268
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,0,0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,
"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,"ID","NUM","IF","ELSE","ELSEIF","LE","GE","EQ","NE","OR",
"AND","UMINUS",
};
char *yyrule[] = {
"$accept : S",
"S : ST",
"ST : IF '(' E ')' DEF",
"ST : ELSEIF '(' E ')' DEF",
"ST : ELSE '(' E ')' DEF",
"ST : ELSE DEF",
"ST : ST ST",
"ST :",
"E : NUM",
"E : ID",
"E : E '+' E",
"E : E '-' E",
"E : E '/' E",
"E : E '*' E",
"E : E GE E",
"E : E LE E",
"E : E NE E",
"E : E OR E",
"E : E AND E",
"E : E '<' E",
"E : E '>' E",
"E : E '+' '+'",
"E : E '-' '-'",
"E : E '=' E",
"E : E EQ E",
"E :",
"DEF : '{' BODY '}'",
"DEF :",
"BODY : BODY BODY",
"BODY : E ';'",
"BODY :",
};
#endif
#ifndef YYSTYPE
typedef int YYSTYPE;
#endif
#if YYDEBUG
#include <stdio.h>
#endif

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

int      yydebug;
int      yynerrs;
int      yyerrflag;
int      yychar;
short   *yyssp;
YYSTYPE *yyvsp;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* variables for the parser stack */
static short   *yyss;
static short   *yysslim;
static YYSTYPE *yyvs;
static int      yystacksize;
#line 54 "ifelse.y"
#include "lex.yy.c"
main()
{
	yyparse();
}
int yywrap()
{
	return 1;
}
int yyerror()
{
	printf("Invalid Syntax");
	return 1;
} 
#line 317 "y.tab.c"
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(void)
{
    int newsize, i;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = yyssp - yyss;
    newss = (yyss != 0)
          ? (short *)realloc(yyss, newsize * sizeof(*newss))
          : (short *)malloc(newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    yyss  = newss;
    yyssp = newss + i;
    newvs = (yyvs != 0)
          ? (YYSTYPE *)realloc(yyvs, newsize * sizeof(*newvs))
          : (YYSTYPE *)malloc(newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse(void)
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

#ifdef lint
    goto yyerrlab;
#endif

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yyvsp[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 16 "ifelse.y"
{printf("Valid \n"); exit(0);}
break;
#line 502 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    return (1);

yyaccept:
    return (0);
}
