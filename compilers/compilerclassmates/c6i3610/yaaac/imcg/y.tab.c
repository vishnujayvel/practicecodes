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
#line 2 "imcfor.y"
#include<stdio.h>
#include<stdlib.h>
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
    2,    3,    4,    5,    0,    7,    1,    8,    1,    9,
    1,   10,    1,   11,    1,   12,    1,   13,    1,    1,
   14,    1,    1,    1,    6,
};
short yylen[] = {                                         2,
    0,    0,    0,    0,   16,    0,    4,    0,    4,    0,
    4,    0,    4,    0,    4,    0,    4,    0,    4,    3,
    0,    3,    1,    1,    1,
};
short yydefred[] = {                                      0,
    0,    0,    0,   25,   24,   21,    0,    0,    0,    0,
    0,   18,   16,    8,   10,   12,   14,    0,    6,   22,
   20,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   13,   15,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    5,
};
short yydgoto[] = {                                       2,
    8,   18,   38,   41,   45,    9,   29,   24,   25,   26,
   27,   23,   22,   10,
};
short yysindex[] = {                                   -257,
  -37,    0,  -40,    0,    0,    0,  -40,   32,  -50,  -40,
  -13,    0,    0,    0,    0,    0,    0,  -44,    0,    0,
    0,  -40,  -40,  -40,  -40,  -40,  -40,  -40,  -40,   38,
   38,  -33,  -33,    0,    0,   32,   32,  -24,  -40,   32,
  -15,  -84,  -40,   32,  -18,  -82,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,  -14,  -35,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    7,
   11,   -5,    1,    0,    0,   -9,  -28,    0,    0,   10,
    0,    0,    0,   -3,    0,    0,    0,
};
short yygindex[] = {                                      0,
   -6,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,
};
#define YYTABLESIZE 218
short yytable[] = {                                       7,
   11,    1,    3,   20,    6,   23,   23,   23,   16,   23,
   19,   23,    7,   17,   28,   30,   31,   32,   33,   34,
   35,   36,   37,   23,   23,   42,   23,   21,   16,   14,
    7,   15,   40,   17,   39,    9,   44,    9,   43,    9,
   46,   11,   47,   11,    1,   11,   13,   19,   12,    2,
    3,   17,    0,    9,    9,    4,    9,    0,    0,   11,
   11,    0,   11,    0,    0,   19,   19,    0,   19,   17,
   17,    0,   17,   16,   14,    0,   15,    0,   17,   16,
   14,    0,   15,    0,   17,    0,    0,    0,    0,    0,
    0,   13,    0,   12,    0,    0,    0,    0,    0,    0,
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
    0,    0,    0,    0,    0,    0,    4,    5,
};
short yycheck[] = {                                      40,
    7,  259,   40,   10,   45,   41,   42,   43,   42,   45,
   61,   47,   41,   47,   59,   22,   23,   24,   25,   26,
   27,   28,   29,   59,   60,   41,   62,   41,   42,   43,
   59,   45,   39,   47,   59,   41,   43,   43,  123,   45,
   59,   41,  125,   43,   59,   45,   60,   41,   62,   59,
   41,   41,   -1,   59,   60,   59,   62,   -1,   -1,   59,
   60,   -1,   62,   -1,   -1,   59,   60,   -1,   62,   59,
   60,   -1,   62,   42,   43,   -1,   45,   -1,   47,   42,
   43,   -1,   45,   -1,   47,   -1,   -1,   -1,   -1,   -1,
   -1,   60,   -1,   62,   -1,   -1,   -1,   -1,   -1,   -1,
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
   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,
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
"$$1 :",
"$$2 :",
"$$3 :",
"$$4 :",
"S : FOR '(' E $$1 ';' E $$2 ';' E $$3 ')' '{' E $$4 ';' '}'",
"$$5 :",
"E : V '=' $$5 E",
"$$6 :",
"E : E '+' $$6 E",
"$$7 :",
"E : E '-' $$7 E",
"$$8 :",
"E : E '*' $$8 E",
"$$9 :",
"E : E '/' $$9 E",
"$$10 :",
"E : E '<' $$10 E",
"$$11 :",
"E : E '>' $$11 E",
"E : '(' E ')'",
"$$12 :",
"E : '-' $$12 E",
"E : V",
"E : NUM",
"V : ID",
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
#line 31 "imcfor.y"
#include "lex.yy.c"
#include<ctype.h>
#include<string.h>
char st[100][10];
int label[20];
int top=0;
char i[2]="0";
char temp[2]="t";
int labelno=0,labeltop=0;
int start=1;
main()
{
printf("\nEnter the expression:");
yyparse();
}
push()
{
strcpy(st[++top],yytext);
}
codegen()
{
strcpy(temp,"t");
strcat(temp,i);
printf("%s=%s %s %s\n",temp,st[top-2],st[top-1],st[top]);
top=top-2;
strcpy(st[top],temp);
i[0]++;
}
codegen_uminus()
{
strcpy(temp,"t");
strcat(temp,i);
printf("%s=-%s\n",temp,st[top]);
top=top-1;
strcpy(st[top],temp);
i[0]++;
}
codegen_assign()
{
printf("%s=%s\n",st[top-2],st[top]);
top=top-2;
}
label1()
{
printf("L%d:\n",labelno++);
}
label2()
{
strcpy(temp,"t");
strcat(temp,i);
printf("%s=not %s\n",temp,st[top]);
printf("if %s goto L%d\n",temp,labelno);
i[0]++;
label[++labeltop]=labelno;
labelno++;
printf("goto L%d\n",labelno);
label[++labeltop]=labelno;
printf("L%d:\n",++labelno);
}
label3()
{
int x;
x=label[labeltop--];
printf("goto L%d\n",start);
printf("L%d:\n",x);
}
label4()
{
int x;
x=label[labeltop--];
printf("goto L%d\n",labelno);
printf("L%d:\n",x);
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

#line 291 "y.tab.c"
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
#line 14 "imcfor.y"
{label1();}
break;
case 2:
#line 14 "imcfor.y"
{label2();}
break;
case 3:
#line 14 "imcfor.y"
{label3();}
break;
case 4:
#line 14 "imcfor.y"
{label4();exit(0);}
break;
case 6:
#line 16 "imcfor.y"
{push();}
break;
case 7:
#line 16 "imcfor.y"
{codegen_assign();}
break;
case 8:
#line 17 "imcfor.y"
{push();}
break;
case 9:
#line 17 "imcfor.y"
{codegen();}
break;
case 10:
#line 18 "imcfor.y"
{push();}
break;
case 11:
#line 18 "imcfor.y"
{codegen();}
break;
case 12:
#line 19 "imcfor.y"
{push();}
break;
case 13:
#line 19 "imcfor.y"
{codegen();}
break;
case 14:
#line 20 "imcfor.y"
{push();}
break;
case 15:
#line 20 "imcfor.y"
{codegen();}
break;
case 16:
#line 21 "imcfor.y"
{push();}
break;
case 17:
#line 21 "imcfor.y"
{codegen();}
break;
case 18:
#line 22 "imcfor.y"
{push();}
break;
case 19:
#line 22 "imcfor.y"
{codegen();}
break;
case 21:
#line 24 "imcfor.y"
{push();}
break;
case 22:
#line 24 "imcfor.y"
{codegen_uminus();}
break;
case 24:
#line 26 "imcfor.y"
{push();}
break;
case 25:
#line 28 "imcfor.y"
{push();}
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
