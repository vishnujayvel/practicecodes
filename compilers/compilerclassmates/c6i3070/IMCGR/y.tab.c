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
#define ID 257
#define NUM 258
#define FOR 259
#define OB 260
#define EQ 261
#define CB 262
#define DEL 263
#define LOGIC 264
#define INCR 265
#define OPER 266
#define OSB 267
#define CSB 268
#define RELOP 269
#define OTHER 270
#define OCB 271
#define CCB 272
#define incr 273
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    1,    3,    4,    6,    7,    9,   10,   11,   13,   14,
    0,   15,   16,    2,   17,   18,    5,   19,   20,   21,
   22,   23,   24,    5,   25,    8,   26,   27,   28,   29,
    8,   30,   31,   32,    8,   12,   33,   12,
};
short yylen[] = {                                         2,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   21,    0,    0,    5,    0,    0,    5,    0,    0,    0,
    0,    0,    0,   13,    0,    3,    0,    0,    0,    0,
    9,    0,    0,    0,    7,    1,    0,    3,
};
short yydefred[] = {                                      0,
    1,    0,    0,    2,    0,   12,    3,    0,    0,   13,
    4,    0,    0,   14,   15,   18,    5,    0,    0,    0,
   16,   19,    6,    0,    0,    0,   17,   20,    0,    7,
    0,    0,    0,    0,    0,   21,   26,   28,   33,    8,
    0,    0,    0,    0,   22,   29,   34,    9,    0,    0,
    0,    0,   23,   30,   35,   36,    0,    0,    0,    0,
    0,   24,   31,   11,   38,
};
short yydgoto[] = {                                       2,
    3,    7,    5,    9,   17,   13,   20,   30,   26,   35,
   44,   57,   52,   60,    8,   12,   18,   24,   19,   25,
   31,   41,   49,   58,   32,   33,   42,   50,   59,   34,
   43,   51,   61,
};
short yysindex[] = {                                   -256,
    0,    0, -252,    0, -253,    0,    0, -251, -249,    0,
    0, -247, -255,    0,    0,    0,    0, -257, -255, -248,
    0,    0,    0, -242, -245, -239,    0,    0,    0,    0,
 -244, -254, -240, -243, -238,    0,    0,    0,    0,    0,
 -235, -231, -234, -237,    0,    0,    0,    0, -255, -233,
 -236, -241,    0,    0,    0,    0,    0, -230, -227, -232,
 -229,    0,    0,    0,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -260,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -263,    0,    0,    0,
    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
    0,    0,    0,    0,  -19,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,
};
#define YYTABLESIZE 41
short yytable[] = {                                      22,
   27,   15,    1,    6,   16,   32,   37,    4,   10,   10,
   14,   21,   25,   11,   23,   27,   28,   29,   37,   36,
   38,   55,   39,   40,   45,   46,   47,    0,   56,   53,
   63,   62,   54,   48,    0,    0,    0,    0,    0,   64,
   65,
};
short yycheck[] = {                                      19,
  261,  257,  259,  257,  260,  266,  270,  260,  272,  261,
  258,  269,  273,  263,  263,  258,  262,  257,  273,  264,
  261,  258,  266,  262,  260,  257,  261,   -1,  270,   49,
  258,  262,  266,  271,   -1,   -1,   -1,   -1,   -1,  272,
  270,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 273
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ID","NUM","FOR","OB","EQ","CB",
"DEL","LOGIC","INCR","OPER","OSB","CSB","RELOP","OTHER","OCB","CCB","incr",
};
char *yyrule[] = {
"$accept : start",
"$$1 :",
"$$2 :",
"$$3 :",
"$$4 :",
"$$5 :",
"$$6 :",
"$$7 :",
"$$8 :",
"$$9 :",
"$$10 :",
"start : FOR $$1 OB $$2 init $$3 DEL $$4 cond $$5 DEL $$6 incre $$7 CB $$8 OCB $$9 body $$10 CCB",
"$$11 :",
"$$12 :",
"init : ID $$11 EQ $$12 NUM",
"$$13 :",
"$$14 :",
"cond : ID $$13 RELOP $$14 NUM",
"$$15 :",
"$$16 :",
"$$17 :",
"$$18 :",
"$$19 :",
"$$20 :",
"cond : OB $$15 cond $$16 CB $$17 LOGIC $$18 OB $$19 cond $$20 CB",
"$$21 :",
"incre : ID $$21 incr",
"$$22 :",
"$$23 :",
"$$24 :",
"$$25 :",
"incre : ID $$22 EQ $$23 ID $$24 OPER $$25 NUM",
"$$26 :",
"$$27 :",
"$$28 :",
"incre : ID $$26 OPER $$27 EQ $$28 NUM",
"body : OTHER",
"$$29 :",
"body : body $$29 OTHER",
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
#line 17 "for.y"
#include "lex.yy.c"
#include<ctype.h>
#include<string.h>
char st[100][25];
int top=0,ptr=0,count=0;
int countarr[200];
main()
{
yyparse();
}
push()
{
strcpy(st[++top],yytext);
ptr++;
}
int yywrap()
{
return 1;
}
int yyerror()
{
printf("\nInvalid for expression");
return 1;
}

#line 227 "y.tab.c"
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
#line 3 "for.y"
{push();}
break;
case 2:
#line 3 "for.y"
{push();}
break;
case 3:
#line 3 "for.y"
{code_gen();}
break;
case 4:
#line 3 "for.y"
{push();}
break;
case 5:
#line 3 "for.y"
{code_gen();}
break;
case 6:
#line 3 "for.y"
{push();}
break;
case 7:
#line 3 "for.y"
{code_gen();}
break;
case 8:
#line 3 "for.y"
{push();}
break;
case 9:
#line 3 "for.y"
{push();}
break;
case 10:
#line 3 "for.y"
{code_gen();}
break;
case 11:
#line 3 "for.y"
{push();}
break;
case 12:
#line 4 "for.y"
{push();}
break;
case 13:
#line 4 "for.y"
{push();}
break;
case 14:
#line 4 "for.y"
{push();}
break;
case 15:
#line 6 "for.y"
{push();}
break;
case 16:
#line 6 "for.y"
{push();}
break;
case 17:
#line 6 "for.y"
{push();}
break;
case 18:
#line 7 "for.y"
{push();}
break;
case 19:
#line 7 "for.y"
{code_gen();}
break;
case 20:
#line 7 "for.y"
{push();}
break;
case 21:
#line 7 "for.y"
{push();}
break;
case 22:
#line 7 "for.y"
{push();}
break;
case 23:
#line 7 "for.y"
{code_gen();}
break;
case 24:
#line 7 "for.y"
{push();}
break;
case 25:
#line 9 "for.y"
{push();}
break;
case 26:
#line 9 "for.y"
{push();}
break;
case 27:
#line 10 "for.y"
{push();}
break;
case 28:
#line 10 "for.y"
{push();}
break;
case 29:
#line 10 "for.y"
{push();}
break;
case 30:
#line 10 "for.y"
{push();}
break;
case 31:
#line 10 "for.y"
{push();}
break;
case 32:
#line 11 "for.y"
{push();}
break;
case 33:
#line 11 "for.y"
{push();}
break;
case 34:
#line 11 "for.y"
{push();}
break;
case 35:
#line 11 "for.y"
{push();}
break;
case 36:
#line 13 "for.y"
{code_gen();}
break;
case 37:
#line 14 "for.y"
{code_gen();}
break;
case 38:
#line 14 "for.y"
{code_gen();}
break;
#line 560 "y.tab.c"
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
