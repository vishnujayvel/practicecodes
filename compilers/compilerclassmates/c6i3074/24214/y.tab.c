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
#line 2 "for.y"
#include <stdio.h>
#include <stdlib.h>
#line 26 "y.tab.c"
#define ID 257
#define NUM 258
#define FOR 259
#define LE 260
#define GE 261
#define EQ 262
#define NE 263
#define OR 264
#define AND 265
#define UMINUS 266
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    1,    4,    4,    4,    4,    5,    5,    5,    5,
    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    2,    3,    3,    3,
    3,    3,    3,    3,    3,
};
short yylen[] = {                                         2,
    1,    9,    3,    2,    1,    0,    2,    2,    1,    0,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    1,    1,    3,    3,    3,
    3,    3,    3,    3,    3,
};
short yydefred[] = {                                      0,
    0,    0,    1,    0,    0,   27,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   24,    0,   25,    0,   14,   15,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    5,    0,
    2,    9,    0,    0,    4,    8,    3,    0,
};
short yydgoto[] = {                                       2,
   62,   63,   38,   61,   68,
};
short yysindex[] = {                                   -243,
  -17,    0,    0, -201,  -31,    0,   41, -201, -201, -201,
 -201, -201, -201, -201, -201, -201,  -40,   32, -201, -201,
 -201,   74,  156,  156,  156,  156,   96,   96,  156,  156,
    0,   -5,    0,   -5,    0,    0,   90,  -23, -201, -201,
 -201, -201, -201, -201, -201, -201, -201,  156,  156,  156,
  156,   96,   96,  156,  156,  -34, -111, -208,    0,   47,
    0,    0,   68,  -62,    0,    0,    0, -208,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,  -41,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -16,  -27,   -7,   -1,    6,   21,   23,   13,   19,
    0,  -21,    0,  -14,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  100,  106,  112,
  118,  -54,  -49,  124,  130,    0,   15,  -81,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -58,
};
short yygindex[] = {                                      0,
   17,  392,    0,    0,   11,
};
#define YYTABLESIZE 449
short yytable[] = {                                      26,
   26,   26,   31,   26,   34,   26,   57,   19,   17,   35,
   18,   58,   20,   18,    6,    1,    3,   26,   26,   12,
   26,   12,    4,   12,   11,   16,   13,   15,   13,    8,
   13,   18,   18,   19,   18,   47,   19,   12,   12,   20,
   12,   20,   11,   10,   13,   13,   21,   13,    5,    6,
    1,   19,   19,   17,   19,    5,    6,   20,   20,   16,
   20,   22,   67,   23,   21,   21,    7,   21,   64,    0,
    0,   17,   17,   59,   17,    0,   33,   16,   16,   22,
   16,   23,   19,   17,    0,   18,    0,   20,   19,   17,
    0,   18,    0,   20,    0,    0,    0,    0,    0,   21,
   16,    0,   15,    0,    0,   65,   16,    0,   15,   19,
   17,    0,   18,    0,   20,   19,   17,    0,   18,    0,
   20,    0,    0,    0,    0,    0,   66,   16,    0,   15,
    0,   19,   17,   16,   18,   15,   20,   19,   17,    6,
   18,    0,   20,    0,    0,    5,    6,    1,    0,   46,
    0,   45,    0,    0,    0,   16,    0,   15,   30,   18,
    0,   18,    0,    0,   31,   19,    0,   19,    0,    0,
   32,   20,    0,   20,    0,    0,   33,   21,    0,   21,
    0,    0,   29,   17,    0,   17,    0,    0,   28,   16,
    0,   16,    0,    0,    5,    6,    1,   19,   17,    0,
   18,    0,   20,    0,    0,    0,    0,    0,    0,   22,
   22,    0,    0,    0,   23,   23,    5,    6,   26,   26,
   26,   26,   26,   26,    0,    9,   10,   11,   12,   13,
   14,    0,   18,   18,   18,   18,   18,   18,   12,   12,
   12,   12,   12,   12,    0,   13,   13,   13,   13,   13,
   13,    0,   19,   19,   19,   19,   19,   19,   20,   20,
   20,   20,   20,   20,    0,   21,   21,   21,   21,   21,
   21,    0,   17,   17,   17,   17,   17,   17,   16,   16,
   16,   16,   16,   16,   22,   22,   23,   23,    5,    6,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    9,   10,   11,   12,   13,   14,    9,   10,   11,   12,
   13,   14,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    9,   10,   11,
   12,   13,   14,    9,   10,   11,   12,   13,   14,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   39,
   40,   41,   42,   43,   44,    9,   10,   11,   12,   18,
   18,   18,   18,   18,   18,   19,   19,   19,   19,   19,
   19,   20,   20,   20,   20,   20,   20,   21,   21,   21,
   21,   21,   21,   17,   17,   17,   17,   17,   17,   16,
   16,   16,   16,   16,   16,    7,    0,    0,    0,   22,
   23,   24,   25,   26,   27,   28,   29,   30,   32,   34,
   35,   36,   37,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   48,   49,   50,   51,   52,   53,   54,   55,   56,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   60,
};
short yycheck[] = {                                      41,
   42,   43,   43,   45,   59,   47,   41,   42,   43,   59,
   45,  123,   47,   41,    0,  259,    0,   59,   60,   41,
   62,   43,   40,   45,   41,   60,   41,   62,   43,   61,
   45,   59,   60,   41,   62,   59,   42,   59,   60,   41,
   62,   47,   59,  125,   59,   60,   41,   62,  257,  258,
  259,   59,   60,   41,   62,  257,  258,   59,   60,   41,
   62,   41,  125,   41,   59,   60,  125,   62,   58,   -1,
   -1,   59,   60,   57,   62,   -1,   45,   59,   60,   59,
   62,   59,   42,   43,   -1,   45,   -1,   47,   42,   43,
   -1,   45,   -1,   47,   -1,   -1,   -1,   -1,   -1,   59,
   60,   -1,   62,   -1,   -1,   59,   60,   -1,   62,   42,
   43,   -1,   45,   -1,   47,   42,   43,   -1,   45,   -1,
   47,   -1,   -1,   -1,   -1,   -1,   59,   60,   -1,   62,
   -1,   42,   43,   60,   45,   62,   47,   42,   43,  125,
   45,   -1,   47,   -1,   -1,  257,  258,  259,   -1,   60,
   -1,   62,   -1,   -1,   -1,   60,   -1,   62,   59,   60,
   -1,   62,   -1,   -1,   59,   60,   -1,   62,   -1,   -1,
   59,   60,   -1,   62,   -1,   -1,   59,   60,   -1,   62,
   -1,   -1,   59,   60,   -1,   62,   -1,   -1,   59,   60,
   -1,   62,   -1,   -1,  257,  258,  259,   42,   43,   -1,
   45,   -1,   47,   -1,   -1,   -1,   -1,   -1,   -1,  264,
  265,   -1,   -1,   -1,  264,  265,  257,  258,  260,  261,
  262,  263,  264,  265,   -1,  260,  261,  262,  263,  264,
  265,   -1,  260,  261,  262,  263,  264,  265,  260,  261,
  262,  263,  264,  265,   -1,  260,  261,  262,  263,  264,
  265,   -1,  260,  261,  262,  263,  264,  265,  260,  261,
  262,  263,  264,  265,   -1,  260,  261,  262,  263,  264,
  265,   -1,  260,  261,  262,  263,  264,  265,  260,  261,
  262,  263,  264,  265,  264,  265,  264,  265,  257,  258,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  260,  261,  262,  263,  264,  265,  260,  261,  262,  263,
  264,  265,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  260,  261,  262,
  263,  264,  265,  260,  261,  262,  263,  264,  265,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  260,
  261,  262,  263,  264,  265,  260,  261,  262,  263,  260,
  261,  262,  263,  264,  265,  260,  261,  262,  263,  264,
  265,  260,  261,  262,  263,  264,  265,  260,  261,  262,
  263,  264,  265,  260,  261,  262,  263,  264,  265,  260,
  261,  262,  263,  264,  265,    4,   -1,   -1,   -1,    8,
    9,   10,   11,   12,   13,   14,   15,   16,   17,   18,
   19,   20,   21,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   39,   40,   41,   42,   43,   44,   45,   46,   47,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   57,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 266
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,0,0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,
"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,"ID","NUM","FOR","LE","GE","EQ","NE","OR","AND","UMINUS",
};
char *yyrule[] = {
"$accept : S",
"S : ST",
"ST : FOR '(' E ';' E2 ';' E ')' DEF",
"DEF : '{' BODY '}'",
"DEF : E ';'",
"DEF : ST",
"DEF :",
"BODY : BODY BODY",
"BODY : E ';'",
"BODY : ST",
"BODY :",
"E : ID '=' E",
"E : E '+' E",
"E : E '-' E",
"E : E '*' E",
"E : E '/' E",
"E : E '<' E",
"E : E '>' E",
"E : E LE E",
"E : E GE E",
"E : E EQ E",
"E : E NE E",
"E : E OR E",
"E : E AND E",
"E : E '+' '+'",
"E : E '-' '-'",
"E : ID",
"E : NUM",
"E2 : E '<' E",
"E2 : E '>' E",
"E2 : E LE E",
"E2 : E GE E",
"E2 : E EQ E",
"E2 : E NE E",
"E2 : E OR E",
"E2 : E AND E",
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
#line 60 "for.y"
int yyerror()
{
	return -1;
}
int yywrap()
{
	return 1;
}
#include "lex.yy.c"

int main() {
	//printf("Enter the expression:\n");
    yyparse();
}      
      
#line 285 "y.tab.c"
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
#line 16 "for.y"
{printf("Input accepted\n"); exit(0);}
break;
#line 470 "y.tab.c"
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
