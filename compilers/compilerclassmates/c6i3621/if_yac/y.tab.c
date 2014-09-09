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
#line 2 "if.y"
#include<stdio.h>
#include<stdlib.h>
void yyerror(char *c);
#line 27 "y.tab.c"
#define ID 257
#define NUM 258
#define IF 259
#define THEN 260
#define GE 261
#define EQ 262
#define LE 263
#define OR 264
#define AND 265
#define ELSE 266
#define NE 267
#define UMINUS 268
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    1,    3,    3,    4,    4,    4,    4,    4,    4,
    4,    4,    4,    4,    4,    4,    4,    4,    4,    2,
    2,    2,    2,    2,    2,    2,    2,    2,    2,
};
short yylen[] = {                                         2,
    1,    9,    1,    1,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    1,    1,    3,
    3,    3,    3,    3,    3,    3,    3,    1,    1,
};
short yydefred[] = {                                      0,
    0,    0,    1,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   19,    0,    3,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    2,
};
short yydgoto[] = {                                       2,
   26,    7,   27,   28,
};
short yysindex[] = {                                   -256,
  -28,    0,    0, -211,  -30,    0,    2,   84, -197, -242,
 -197, -197, -197, -197, -197, -197, -197, -197, -197, -197,
 -197, -197,  -30,    0,   91,    0,   -9,   91,   78,   78,
   78,   98,   98,   78,   78,   78,  -37,  -37,   91,   91,
 -197, -197, -197, -197, -197, -197, -197, -197, -213,   78,
   78,   78,   98,   98,   78,   78,   78, -242,   -2,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,  -34,  -18,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -41,    0,  -21,    0,    0,    3,  -27,   48,
   55,  111,  113,   62,   70,   77,  -11,   -4,  -19,   -5,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    4,
   11,   18,  106,  108,   26,   33,   40,    0,    0,    0,
};
short yygindex[] = {                                      0,
   65,    0,   10,  157,
};
#define YYTABLESIZE 378
short yytable[] = {                                      18,
   18,   18,    1,   18,   21,   18,   28,   18,   18,   22,
   18,    4,   18,   23,   23,   24,    1,   18,   18,    5,
   18,    8,   29,   19,   19,   18,   19,   18,   19,    6,
    9,    6,   13,    6,   13,    9,    7,    5,    7,    8,
    7,   19,   10,   19,   13,    5,    6,    6,    6,   49,
    6,   14,   58,    9,    7,    7,   60,    7,   12,   23,
   24,    4,   13,   13,    3,   13,   10,   59,    0,   14,
   14,    0,   14,   11,    0,    0,   12,   12,    0,   12,
   15,    0,    0,    0,   10,   10,    0,   10,   24,    0,
    0,   11,   11,    0,   11,   22,    0,    0,   15,   15,
    0,   15,   20,    0,    0,    0,    0,   14,    0,   14,
   21,    0,    0,    0,   12,    0,   12,   25,    0,   21,
   19,   10,   20,   10,   22,   21,   19,    0,   20,   11,
   22,   11,   21,   19,    0,   20,   15,   22,   15,   21,
   19,    0,   20,   16,   22,   17,   16,    0,   17,    0,
   46,   26,   47,   27,    0,    0,    0,   46,    0,   47,
    8,    0,    0,    0,   16,   25,   17,   29,   30,   31,
   32,   33,   34,   35,   36,   37,   38,   39,   40,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   50,   51,   52,
   53,   54,   55,   56,   57,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   18,
   18,   18,   18,   18,    0,   18,   18,   18,   18,   18,
   18,    0,   18,   13,   13,   13,   13,   13,    0,   13,
    0,    0,   19,   19,   19,   19,   19,    0,   19,    6,
    6,    6,    6,    6,    0,    6,    7,    7,    7,    7,
    7,    0,    7,    0,   13,   13,   13,   13,   13,    0,
   13,   14,   14,   14,   14,   14,    0,   14,   12,   12,
   12,   12,   12,    0,   12,    0,   10,   10,   10,   10,
   10,    0,   10,   11,   11,   11,   11,   11,    0,   11,
   15,   15,   15,   15,   15,    0,   15,    0,   14,   14,
   14,   14,   14,    0,   14,   12,   12,   12,   12,   12,
    0,   12,   10,   10,   10,   10,   10,    0,   10,    0,
   11,   11,   11,   11,   11,    0,   11,   15,   15,   15,
   15,   15,    0,   15,   11,   12,   13,   14,   15,    0,
   18,   41,   42,   43,   44,   45,    0,   48,   41,   42,
   43,    0,    0,    0,   48,    0,    0,    0,    0,   16,
   16,   17,   17,    0,   16,   16,   17,   17,
};
short yycheck[] = {                                      41,
   42,   43,  259,   45,   42,   47,   41,   42,   43,   47,
   45,   40,   47,   41,  257,  258,  259,   59,   60,   41,
   62,   41,   41,   42,   43,   60,   45,   62,   47,   41,
   61,   43,   60,   45,   62,   41,   41,   59,   43,   59,
   45,   60,   41,   62,   41,  257,  258,   59,   60,   59,
   62,   41,  266,   59,   59,   60,   59,   62,   41,  257,
  258,   59,   59,   60,    0,   62,   41,   58,   -1,   59,
   60,   -1,   62,   41,   -1,   -1,   59,   60,   -1,   62,
   41,   -1,   -1,   -1,   59,   60,   -1,   62,   41,   -1,
   -1,   59,   60,   -1,   62,   41,   -1,   -1,   59,   60,
   -1,   62,   41,   -1,   -1,   -1,   -1,   60,   -1,   62,
   41,   -1,   -1,   -1,   60,   -1,   62,   41,   -1,   42,
   43,   60,   45,   62,   47,   42,   43,   -1,   45,   60,
   47,   62,   42,   43,   -1,   45,   60,   47,   62,   42,
   43,   -1,   45,   60,   47,   62,   41,   -1,   41,   -1,
   60,   41,   62,   41,   -1,   -1,   -1,   60,   -1,   62,
    4,   -1,   -1,   -1,   59,    9,   59,   11,   12,   13,
   14,   15,   16,   17,   18,   19,   20,   21,   22,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   41,   42,   43,
   44,   45,   46,   47,   48,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  261,
  262,  263,  264,  265,   -1,  267,  261,  262,  263,  264,
  265,   -1,  267,  261,  262,  263,  264,  265,   -1,  267,
   -1,   -1,  261,  262,  263,  264,  265,   -1,  267,  261,
  262,  263,  264,  265,   -1,  267,  261,  262,  263,  264,
  265,   -1,  267,   -1,  261,  262,  263,  264,  265,   -1,
  267,  261,  262,  263,  264,  265,   -1,  267,  261,  262,
  263,  264,  265,   -1,  267,   -1,  261,  262,  263,  264,
  265,   -1,  267,  261,  262,  263,  264,  265,   -1,  267,
  261,  262,  263,  264,  265,   -1,  267,   -1,  261,  262,
  263,  264,  265,   -1,  267,  261,  262,  263,  264,  265,
   -1,  267,  261,  262,  263,  264,  265,   -1,  267,   -1,
  261,  262,  263,  264,  265,   -1,  267,  261,  262,  263,
  264,  265,   -1,  267,  261,  262,  263,  264,  265,   -1,
  267,  261,  262,  263,  264,  265,   -1,  267,  261,  262,
  263,   -1,   -1,   -1,  267,   -1,   -1,   -1,   -1,  264,
  265,  264,  265,   -1,  264,  265,  264,  265,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 268
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,0,0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,
"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"ID","NUM","IF","THEN","GE","EQ","LE","OR","AND","ELSE","NE",
"UMINUS",
};
char *yyrule[] = {
"$accept : S",
"S : ST",
"ST : IF '(' E2 ')' ST1 ';' ELSE ST1 ';'",
"ST1 : ST",
"ST1 : E",
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
"E2 : ID",
"E2 : NUM",
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
#line 50 "if.y"
#include "lex.yy.c"
int main()
{
yyparse();
return 1;
}
void yyerror(char *c)
{
printf("ERROR SYNTAX");
}
#line 259 "y.tab.c"
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
#line 14 "if.y"
{ printf("Input accepted\n"); exit(0); }
break;
#line 444 "y.tab.c"
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
