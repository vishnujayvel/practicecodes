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
#line 2 "switch.y"
#include<stdio.h>
#include<stdlib.h>
void yyerror(char *c);
#line 27 "y.tab.c"
#define ID 257
#define NUM 258
#define SWITCH 259
#define CASE 260
#define DEFAULT 261
#define BREAK 262
#define LE 263
#define GE 264
#define EQ 265
#define NE 266
#define OR 267
#define AND 268
#define ELSE 269
#define UMINUS 270
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    1,    2,    2,    3,    3,    3,    4,    5,    5,
    5,    5,    5,    5,    5,    5,    5,    5,    5,    5,
    5,    5,    5,
};
short yylen[] = {                                         2,
    1,    7,    1,    2,    2,    5,    2,    6,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    1,    1,
};
short yydefred[] = {                                      0,
    0,    0,    1,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    7,    2,    0,    0,    4,    0,    0,    0,
   23,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    6,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    8,
};
short yydgoto[] = {                                       2,
    3,   10,   16,   17,   22,
};
short yysindex[] = {                                   -243,
  -18,    0,    0, -232,  -12,  -92, -241, -223,  -22,  -86,
 -248,  -17,    0,    0,    6, -241,    0, -197, -197,   -6,
    0,  -42,  -36, -197, -197, -197, -197, -197, -197, -197,
 -197, -197, -197, -197,    0, -197, -197, -219,   -9,    7,
    7,    7,    7,   24,   24,    7,    7,  -32,  -32,   -9,
   -9,   -1,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -51,    0,    0,    0,    0, -117,    0,    0,    0,  -15,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    9,   13,
   28,   34,   40,  -57,  -55,   46,   52,   -3,    3,   11,
  -22,    0,    0,
};
short yygindex[] = {                                      0,
    0,    0,   69,    0,   91,
};
#define YYTABLESIZE 320
short yytable[] = {                                      36,
   33,   20,   34,   21,   37,   36,   33,    5,   34,   36,
   37,    8,   15,    9,   37,    1,   35,   31,    8,   32,
    9,    4,   38,   31,    5,   32,   22,   22,    6,   22,
    7,   22,   36,   33,   12,   34,   13,   37,   14,   10,
   18,   10,   52,   22,   22,   11,   22,   11,   36,   33,
   31,   34,   32,   37,   24,   10,   10,   53,   10,   20,
   21,   11,   11,   19,   11,   36,   33,    9,   34,   12,
   37,   16,   16,    3,   16,   11,    0,    0,    0,    0,
    0,    0,    0,   31,    0,   32,   17,   17,    0,   17,
    0,    0,   18,   18,    0,   18,    0,    0,   19,   19,
    0,   19,    0,    0,   14,   14,    0,   14,    0,   23,
   15,   15,    0,   15,   39,   40,   41,   42,   43,   44,
   45,   46,   47,   48,   49,    0,   50,   51,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    5,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   20,
   20,   21,   21,    0,    0,    0,    0,    0,    0,    0,
   25,   26,   27,   28,   29,   30,   25,   26,   27,   28,
   29,   30,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   22,   22,   22,
   22,   22,   22,   25,   26,   27,   28,   29,   30,   10,
   10,   10,   10,   10,   10,   11,   11,   11,   11,   11,
   11,    0,    0,    0,    0,   16,   16,   16,   16,   16,
   16,    0,    0,    0,    0,    0,   25,   26,   27,   28,
   17,   17,   17,   17,   17,   17,   18,   18,   18,   18,
   18,   18,   19,   19,   19,   19,   19,   19,   14,   14,
   14,   14,   14,   14,   15,   15,   15,   15,   15,   15,
};
short yycheck[] = {                                      42,
   43,   59,   45,   59,   47,   42,   43,  125,   45,   42,
   47,  260,  261,  262,   47,  259,   59,   60,  260,   62,
  262,   40,   59,   60,  257,   62,   42,   43,   41,   45,
  123,   47,   42,   43,  258,   45,   59,   47,  125,   43,
   58,   45,  262,   59,   60,   43,   62,   45,   42,   43,
   60,   45,   62,   47,   61,   59,   60,   59,   62,  257,
  258,   59,   60,   58,   62,   42,   43,   59,   45,   59,
   47,   59,   60,  125,   62,    7,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   60,   -1,   62,   59,   60,   -1,   62,
   -1,   -1,   59,   60,   -1,   62,   -1,   -1,   59,   60,
   -1,   62,   -1,   -1,   59,   60,   -1,   62,   -1,   19,
   59,   60,   -1,   62,   24,   25,   26,   27,   28,   29,
   30,   31,   32,   33,   34,   -1,   36,   37,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  261,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  267,
  268,  267,  268,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  263,  264,  265,  266,  267,  268,  263,  264,  265,  266,
  267,  268,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  263,  264,  265,
  266,  267,  268,  263,  264,  265,  266,  267,  268,  263,
  264,  265,  266,  267,  268,  263,  264,  265,  266,  267,
  268,   -1,   -1,   -1,   -1,  263,  264,  265,  266,  267,
  268,   -1,   -1,   -1,   -1,   -1,  263,  264,  265,  266,
  263,  264,  265,  266,  267,  268,  263,  264,  265,  266,
  267,  268,  263,  264,  265,  266,  267,  268,  263,  264,
  265,  266,  267,  268,  263,  264,  265,  266,  267,  268,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 270
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,0,0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,
"':'","';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,
"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ID","NUM","SWITCH","CASE","DEFAULT","BREAK","LE",
"GE","EQ","NE","OR","AND","ELSE","UMINUS",
};
char *yyrule[] = {
"$accept : S",
"S : ST",
"ST : SWITCH '(' ID ')' '{' B '}'",
"B : C",
"B : C D",
"C : C C",
"C : CASE NUM ':' E ';'",
"C : BREAK ';'",
"D : DEFAULT ':' E ';' BREAK ';'",
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
#line 44 "switch.y"
int main()
{
yyparse();
return 1;
}
void yyerror(char *c)
{
printf("ERROR SYNTAX");
}
#line 242 "y.tab.c"
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
#line 14 "switch.y"
{ printf("Input accepted\n"); exit(0); }
break;
#line 427 "y.tab.c"
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
