screen
./a.out < tokeninp
cat tokeninp
vi tokenizer.l
lex tokenizer.l
cc lex.yy.c -ll
./a.out < tokeninp
vi tokenizer.l
vi iftonested.l
lex iftonested.l
vi iftonested.l
lex iftonested.l
vi iftonested.l
lex iftonested.l
cc lex.yy.c -ll
vi ifinp
lex iftonested.l
cc lex.yy.c -ll
./a.out < ifinp
vi ifinp
vi iftonested.l
lex iftonested.l
cc lex.yy.c -ll
./a.out < ifinp
vi iftonested.l
lex iftonested.l
cc lex.yy.c -ll
./a.out < ifinp
vi iftonested.l
lex iftonested.l
vi iftonested.l
lex iftonested.l
cc lex.yy.c -ll
vi iftonested.l
lex iftonested.l
cc lex.yy.c -ll
./a.out < ifinp
vi iftonested.l
lex iftonested.l
cc lex.yy.c -ll
./a.out < ifinp
vi iftonested.l
lex iftonested.l
cc lex.yy.c -ll
vi iftonested.l
lex iftonested.l
cc lex.yy.c -ll
vi iftonested.l
lex iftonested.l
cc lex.yy.c -ll
./a.out < ifinp
vi iftonested.l
vi ifinp
./a.out < ifinp
vi iftonested.l
lex iftonested.l
vi iftonested.l
lex iftonested.l
vi ifinp
cc lex.yy.c -ll
./a.out < ifinp
cat infinp
cat ifinp
cc lex.yy.c -ll
./a.out < ifinp
vi iftonested.l
vi ifinp
./a.out < ifinp
vi iftonested.l
lex iftonested.l
vi iftonested.l
lex iftonested.l
vi iftonested.l
lex iftonested.l
vi iftonested.l
lex iftonested.l
cc lex.yy.c -ll
./a.out < ifinp
vi iftonested.l
./a.out < ifinp
vi iftonested.l
lex iftonested.l
cc lex.yy.c -ll
./a.out < ifinp
 cat ifinp
ls
vi funtomacro.l
cd lak
vi infix.l
lex infix.l
vi infix.y
yacc infix.y
vi infix.y
yacc infix.y
vi infix.y
yacc infix.y
vi infix.y
yacc infix.y
vi infix.y
yacc infix.y
vi infix.y
cc lex.yy.c -ll
vi infix.l
vi infix.y
yacc infix.y
vi infix.y
yacc infix.y
cc lex.yy.c y.tab.c
vi infix.l
cc lex.yy.c y.tab.c
lex infix.l
cc lex.yy.c y.tab.c
vi infix.y
yacc infix.y
cc lex.yy.c y.tab.c
vi infix.y
yacc infix.y
cc lex.yy.c y.tab.c
vi infix.l
lex infix.l
cc lex.yy.c y.tab.c
vi infix.l
lex infix.l
vi infix.y
yacc infix.y
vi infix.y
yacc infix.y
vi infix.y
yacc infix.y
vi infix.y
vi infix.l
ls
yacc infix.y
ls
lex infix.l
ls
cat yy1.c
vi infix.l
lex infix.l
yacc infix.y
cc y.tab.c lex.yy.c
vi infix.l
vi infix.y
yacc infix.y
vi infix.y
yacc infix.y
vi infix.y
yacc infix.y
vi infix.y
yacc infix.y
vi infix.y
yacc infix.y
vi infix.y
yacc infix.y
vi infix.y
yacc infix.y
yacc -d infix.y
ls
vi infix.y
vi infix.l
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
vi infix.y
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
vi infix.l
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
vi infix.l
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
cc lex.yy.c y.tab.c
vi inp1
vi i1
lex infix.l
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c < i1
cc y.tab.c lex.yy.c -ll < i1
cc y.tab.c lex.yy.c -ll
cc lex.yy.c -ll y.tab.c
vi infix.l
cc lex.yy.c -ll
vi infix.l
cc lex.yy.c -ll
lex infix.l
cc lex.yy.c -ll
vi infix.l
lex infix.l
yacc -d infix.y
cc y.tab.c lex.yy.c
vi infix.y
lex infix.l
yacc -d infix.y
cc y.tab.c lex.yy.c
vi infix.y
vi infix.l
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
vi infix.y
yacc infix.y
cc y.tab.c lex.yy.c
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
cc  lex.yy.c y.tab.c
vi infix.y
vi infix.l
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
./a.out < in1
vi infix.l
vi i1
./a.out < i1
vi infix.y
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
./a.out < i1
vi infix.y
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
./a.out < i1
vi infix.y
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
./a.out < i1
vi infix.y
yacc -d infix.y
vi infix.y
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
./a.out < i1
vi i1
./a.out < i1
vi infix.y
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
./a.out < i1
vi i1
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
./a.out
vi infix.y

yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
./a.out < i1
vi i1
vi infix.y
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
./a.out < i1
vi i1
./a.out < i1
vi i1
./a.out < i1
vi i1
./a.out < i1
vi infix.y
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
./a.out < i1
vi infix.l
vi infix.y
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
./a.out < i
./a.out < i1
vi infix.l
vi infix.y
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
./a.out < i1
vi i1
./a.out < i1
vi i1
./a.out < i1
vi infix.y
vi i1
./a.out < i1
vi infix.y
vi i1
./a.out < i1
vi infix.y
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
./a.out < i1
vi infix.l
vi infix.y
vi infix.l
vi infix.y
yacc -d infix.y
yacc infix.y
vi i1
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
./a.out < i1
vi i1
./a.out < i1
vi i1
./a.out < i1
cat i1
yacc -d infix.y
lex infix.l
cc y.tab.c lex.yy.c
./a.out < i1
cp infix.l postfix.l
cp infix.y postfix.y
vi infix.y
vi i12
yacc -d postfix.y
lex postfix.l
cc y.tab.c lex.yy.c
./a.out < i12
vi postfix.y
vi infix.y
cp infix.y post.y
cp postfix.y infix.y
vi infix.y
cp  post.y postfix.y
vi postfix.y
yacc -d postfix.y
lex postfix.l
cc y.tab.c lex.yy.c
./a.out < i12
vi postfix.l
vi postfix.y
vi i12
yacc -d postfix.y
lex postfix.l
cc y.tab.c lex.yy.c
./a.out < i12
vi i12
./a.out < i12
vi postfix.y
yacc -d postfix.y
lex postfix.l
cc y.tab.c lex.yy.c
./a.out < i12
vi postfix.y
yacc -d postfix.y
lex postfix.l
cc y.tab.c lex.yy.c
./a.out < i12
yacc postfix.y
lex postfix.l
cc lex.yy.c y.tab.c
./a.out < i12
vi i12
vi postfix.y
vi infix.y
vi postfix.y
vi i12
./a.out < i12
vi i12
./a.out < i12
vi postfix.y
vi postfix.l
yacc -d postfix.y
lex postfix.l
cc lex.yy.c y.tab.c
./a.out < i12
vi i12
vi postfix.l
yacc -d postfix.y
lex postfix.l
cc lex.yy.c y.tab.c
./a.out < i12
vi postfix.l
vi postfix.y
yacc -d postfix.y
lex postfix.l
cc lex.yy.c y.tab.c
./a.out < i12
cc lex.yy.c y.tab.c -ll
./a.out < i12
vi postfix.y
vi i12
cc lex.yy.c y.tab.c -ll
./a.out < i12
vi i12
./a.out < i12
vi postfix.l
./a.out 
vi i12
./a.out < i12
vi i12
./a.out < i12
vi i12
./a.out < i12
./a.out 
vi i12
vi postfix.l
vi postfix.y
./a.out 
yacc -d postfix.y
lex postfix.l
cc lex.yy.c y.tab.c -ll
./a.out < i12
cat i12
vi i12
./a.out < i12
cat i12
vi infix.y
yacc -d infix.y
lex infix.l
cc lex.yy.c y.tab.c
./a.out < i1
vi i1
./a.out < i1
vi infix.y
yacc -d infix.y
lex infix.l
cc lex.yy.c y.tab.c
./a.out < i1
cd lak
ls
vi infix.y
vi infix.l
yacc -d infix.y
lex infix.l
cc lex.yy.c y.tab.c
./a.out
vi postfix.y
vi infix.l
cd lak
ls
vi infix.y
ls
cd lak
ls
vi yy1.l
ls
ls
cd lak
ls
vi infix.l
vi infix.y
lex infix.l
lex infix.y
vi infix.y
lex infix.y
vi infix.y
ls
cd lak
ls
vi while .l
vi while.y
vi while.l
vi while.y
cd lak

vi while.y
vi infix.
vi infix.y
ls
ls -a
rm .infix.l.swp
rm .infix.y.swp
ls -a
vi while.l
vi infix.l
vi while.l
lex while.l
vi while.l
lex while.l
vi while.l
lex while.l
vi while.l
lex while.l
vi while.l
lex while.l
vi while.l
lex while.l
vi while.l
vi infix.l
lex infix.l
yacc -d infix.l
vi infix.l
lex infix.l
yacc -d infix.l
yacc -d infix.y
cc lex.yy.c y.tab.c
./a.out
vi infix.y
passwd
vi infix.y
vi while.l
lex while.l
vi while.y
vi while.l
vi while.y
yacc -d while.y
vi while.y
yacc -d while.y
lex while.l
cc lex.yy.c y.tab.c
vi while.y
yacc -d while.y
lex while.l
cc lex.yy.c y.tab.c
vi while
cc lex.yy.c y.tab.c
./a.out < while
vi while.l
vi while.y
yacc -d while.y
vi while.y
vi while
yacc -d while.y
lex while.l
cc lex.yy.c y.tab.c
./a.out < while
vi while.y
vi while
yacc -d while.y
vi while
vi while.y
yacc -d while.y
lex while.l
cc lex.yy.c y.tab.c
./a.out < while
vi while.l
yacc -d while.y
lex while.l
cc lex.yy.c y.tab.c
./a.out < while
vi while.l
lex while.l
yacc -d while.y
cc lex.yy.c y.tab.c
./a.out < while
vi while.y
vi while
./a.out < while
vi while.l
vi while
vi while.y
yacc -d while.y
lex while.l
cc lex.yy.c y.tab.c
./a.out < while
vi while
yacc -d while.y
lex while.l
cc lex.yy.c y.tab.c
./a.out < while
vi while
vi while.y
vi whiole.l
vi while.l
yacc -d while.y
lex while.l
cc lex.yy.c y.tab.c
./a.out < while
vi while
./a.out < while
vi while.l
vi infix.l
vi infix.y
vi while
./a.out < while
vi while
./a.out < while
vi while.l
yacc -d while.y
lex while.l
cc lex.yy.c y.tab.c
./a.out < while
vi while
./a.out < while
vi while
./a.out < while
vi while.y
vi while.l
yacc -d while.y
lex while.l
cc lex.yy.c y.tab.c
./a.out < while
cat while
vi while
./a.out < while
vi while
./a.out < while
vi while.l
vi while.y
ls
vi for.l
cp while.l for.l
vi for.l
cp while.y for.y
vi for.y
vi for
yacc for.y
vi for.y
vi for.l
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi for.l
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi for.y
cd lak
vi for.y
vi for
vi for.y
vi for.l
vi for.y
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi for.y
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi for.y
vi for
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi for.y
vi for
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi for.y
vi for
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi for.l
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi for
./a.out < for
vi for
./a.out < for
vi for
./a.out < for
vi for
vi for.y
yacc -d for.y
cc lex.yy.c y.tab.c
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi for
vi for.y
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi for.y
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi for.y
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi for
vi for.y
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi for
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi for
./a.out < for
vi for
./a.out < for
vi for.y
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
vi for
./a.out < for
vi for
./a.out < for
vi for
./a.out < for
vi for.y
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi if.l
vi for.l
vi if.l
vi for.l
vi if.l
vi for.y
vi if.l
vi for.l
vi if.l
vi if.y
vi if
vi if.y
yacc -d for.y
lex for.l
cc y.tab.c lex.yy.c
./a.out<if
yacc -d if.y
lex if.l
vi if.l
lex if.l
vi if.l
lex if.l
vi if.l
lex if.l
yacc -d if.y
lex if.l
cc y.tab.c lex.yy.c
vi if.l
vi if.y
vi for.y
vi if.y
yacc -d if.y
lex if.l
cc y.tab.c lex.yy.c
./a.out<if
vi ifelse.y
cp if.y ifelse.y
vi ifelse.y
vi if
./a.out<if
vi if
./a.out<if
cp if.l ifelse.l
vi ifelse.y
vi ifelse.l
vi ifelse.y
vi ifelse.l
vi ifelse
yacc -d ifelse.y
lex ifelse.l
cc y.tab.c lex.yy.c
vi ifelse.y
vi ifelse.l
yacc -d ifelse.y
lex ifelse.l
cc y.tab.c lex.yy.c
./a.out<ifelse
vi ifelse
vi ifelse.y
yacc -d ifelse.y
lex ifelse.l
cc y.tab.c lex.yy.c
./a.out<ifelse
vi ifelse
./a.out<ifelse
vi ifelse
./a.out<ifelse
vi ifelse
cp if.l switch.l
vi swithc.l
rm swithc.l
vi switch.l
cp if.y switch.y
vi switch.y
vi switch
vi switch.y
yacc -d switch.y
vi switch.y
yacc -d switch.y
lex switch.l
cc y.tab.c lex.yy.c
./a.out < switch
vi switch
vi switch.y
vi switch.l
vi ifelse.y
vi switch.l
vi switch.y
vi switch
yacc -d switch.y
vi switch.y
vi switch
./a.out < switch
lex switch.l
yacc -d switch.y
vi switch.y
yacc -d switch.y
lex switch.l
cc y.tab.c lex.yy.c
./a.out < switch
vi switch
vi switch.y
yacc -d switch.y
lex switch.l
cc y.tab.c lex.yy.c
./a.out < switch
vi switch
./a.out < switch
vi switch.l
yacc -d switch.y
lex switch.l
cc y.tab.c lex.yy.c
./a.out < switch
vi switch
vi switch.y
vi switch.l
yacc -d switch.y
lex switch.l
cc y.tab.c lex.yy.c
./a.out < switch
vi switch.l
yacc -d switch.y
lex switch.l
cc y.tab.c lex.yy.c
./a.out < switch
vi switch
vi switch.y
vi switch
vi switch.l
yacc -d switch.y
vi switch.y
vi switch.l
yacc -d switch.y
vi switch.y
yacc -d switch.y
lex switch.l
cc y.tab.c lex.yy.c
./a.out < switch
vi if.l
vi if.y
vi ifelse.y
vi ifelse.l
vi switch.l
vi switch.y
vi while.l
vi while.y
lex for.l
yacc -d for.y
cc lex.yy.c y.tab.c
./a.out < for
cat for
vi for
./a.out < for
lex ifelse.l
yacc -d ifelse.l
yacc -d ifelse.y
cc lex.yy.c y.tab.c
./a.out < ifelse
vi ifelse
./a.out < ifelse
vi ifelse
./a.out < ifelse
vi ifelse
./a.out < ifelse
lex switch.l
yacc -d switch.y
cc lex.yy.c y.tab.c
./a.out < switch
vi switch
./a.out < switch
vi switch
./a.out < switch
cd lak
ls
vi while.y
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < while
vi while
./a.out < while
vi while
./a.out < while
yacc -d while.l
vi while.y
yacc -d while.y
lex while.l
cc lex.yy.c y.tab.c
./a.out < while
vi while
./a.out < while
vi while
./a.out < while
vi while
vi for.y
vi while.y
vi while.l
vi for.l
vi for.y
vi for
lex for.l
yacc -d for.y
vi for.y
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi for
./a.out < for
vi for.y
vi for
./a.out < for
vi for.y
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi for.l
vi while.l
vi for.l
vi while.y
vi for.y
vi for
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
vi for
./a.out < for
vi for.y
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c
./a.out < for
cc y.tab.c lex.yy.c
./a.out < for
vi fo.l
vi for.l
lex for.l
cc lex.yy.c -ll
./a.out < for
vi for.l
vi for.y
yacc -d for.y
lex for.l
cc y.tab.c lex.yy.c
./a.out < for
vi for.y
yacc -d for.y
lex for.l
cc y.tab.c lex.yy.c
./a.out < for
vi for.y
vi while.y
vi for.y
cp while.y for.y
vi for.y
vi for
yacc -d for.y
lex for.l
cc y.tab.c lex.yy.c
./a.out < for
vi while
vi for
./a.out < for
vi for.y
cd lak
ls
vi ifelse.l
vi ifelse.y
cd lak
vi post.l
vi post.y
ls
cd lak
ls
vi imc2.y
