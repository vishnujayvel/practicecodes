./a.out < token
vi newtokenizer.l
vi tokenizer.l
vi newtoken.l
lex newtoken.l
vi newtoken.l
lex newtoken.l
cc lex.yy.c -ll
./a.out < token
cat token
lex newtoken.l
cc lex.yy.c -ll
vi token
lex newtoken.l
cc lex.yy.c -ll
./a.out < token
vi if2nestedif.l
lex newtoken.l
cc lex.yy.c -ll
./a.out < token
vi newtoken.l
ls
vi ifnestedif.l
ls
vi if2nestedif.l
vi if2nestedif
lex funtomac.l
lex macro2fun.l
gcc lex.yy.c -ll
./a.out
lex macro2fun.l
gcc lex.yy.c -ll
./a.out
lex macro2fun.l
gcc lex.yy.c -ll
                                                                                                                                                                                                                                     
ls
lex funtomac.l
vi funtomac.l
lex funtomac.l
gcc lex.yy.c -ll
vi funtomac.l
lex funtomac.l
gcc lex.yy.c -ll
vi funtomac.l
lex funtomac.l
gcc lex.yy.c -ll
./a.out
lex funtomac.l
gcc lex.yy.c -ll
./a.out
lex funtomac.l
vim inpu
lex funtomac.l
gcc lex.yy.c -ll
./a.out <inpu
ls
lex mactofun.l
gcc lex.yy.c -ll
./a.out
vi newtokenizer.l
lex newtokenizer.l
gcc lex.yy.c -ll
./a.out
vi newtokenizer.l
lex newtokenizer.l
gcc lex.yy.c -ll
./a.out
vi newtokenizer.l
lex newtokenizer.l
gcc lex.yy.c -ll
vi newtokenizer.l
lex newtokenizer.l
gcc lex.yy.c -ll
./a.out
vi newtokenizer.l
ls
vi newtoken.l
lex newtoken.l
gcc lex.yy.c -ll
./a.out
vi newtoken.l
lex newtoken.l
vi newtoken.l
lex newtoken.l
vi newtoken.l
vim if2nestedif.l
lex if2nestedif.l
cc lex.yy.c -ll
./a.out < if2nestedif
ls
vim macro2fun.l
ls
cat macrotofun.l
cat mactofun.l
ls
vim funtomac.l
ls
=0)
        {                 if(flag==1) printf("\n");
                else printf("\n");
        }
        else    printf("\n");
        }
lex newtoken.l
vi newtoken.l
lex newtoken.l
gcc lex.yy.c -ll
vi newtoken.l
lex newtoken.l
vi newtoken.l
lex newtoken.l
gcc lex.yy.c -ll
vi newtoken.l
lex newtoken.l
gcc lex.yy.c -ll
ls
cat if2nestedif.l
ls
cat if2nestedif
vi if2nestedif.l
ls
vi ifnestedif.l
ls
vi ifnestedif.l
rm ifnestedif.l
ls
vi inpu
ls
vi mactofun.l
ls
lex macro2fun.l
cc lex.yy.c -ll
./a.out < macro2fun
lex macro2fun.l
cc lex.yy.c -ll
./a.out < macro2fun
ls
vi sample.l
ls
lex mactofun.l
cc lex.yy.c -ll
./a.out < macro2fun
vi mactofun.l
ls
lex newtoken.l
cc lex.yy.c -ll
lex newtokenizer.l
gcc lex.yy.c -ll
./a.out
clear
lex newtoken.l
gcc lex.yy.c -ll
vi newtoken.l
lex newtoken.l
gcc lex.yy.c -ll
vi newtoken.l
lex newtoken.l
gcc lex.yy.c -ll
vi newtoken.l
lex newtoken.l
vi newtoken.l
lex newtoken.l
vi newtoken.l
ls
cd yaccstuff
ls
cd ex1
ls
lex calcu.l
gcc lex.yy.c -ll
./a.out
clear
ls
cd yaccstuff
pwd
cd /home/c6i3606/yaccstuff
pwd
ls
date
ls
mkdir yacc
rmdir yacc
mkdir yaccstuff
ls
cd yaccstuff
mkdir ex1
cd ex1
ls
vi sample.l
vi sample.y
vi sample.l
lex sample.l
vi sample.l
lex sample.l
vi sample.l
lex sample.l
yacc sample.y
ls
cc y.tab.c lex.yy.c -ll
vi calcu.l
vi calcu.y
yacc calcu.y
vi calcu.y
lex calcu.l
ycc calcu.y
yacc calcu.y
vi calcu.y
yacc calcu.y
lex calcu.l
yacc calcu.y
vi calcu.y
yacc calcu.y
lex calcu.l
vi calcu.y
lex sample.l
yacc sample.y
cc y.tab.c lex.yy.c -ll -lm
yacc -d sample.y
ls
cc y.tab.c lex.yy.c -ll -lm
cc lex.yy.c -ll -lm
lex sample.l
cc lex.yy.c -ll
vi sample.l
lex sample.l
cc lex.yy.c -ll
vi new.l
vi new.y
vi new.l
vi new.y
lex new.l
yacc new.y
cc lex.yy.c y.tab.c -ll
cc lex.yy.c y.tab.c
vi new.l
vi new.y
lex new.l
yacc new.y
cc lex.yy.c y.tab.c
vi new.l
lex new.l
yacc new.y
cc lex.yy.c y.tab.c
./a.out
vi new.l
lex new.l
yacc new.y
cc lex.yy.c y.tab.c
vi new.l
vi new.y
lex new.l
yacc new.y
cc lex.yy.c y.tab.c
vi new.l
yacc -d new.y
lex new.l
cc lex.yy.c y.tab.c
./a.out
lex new.l
vi new.l
lex new.l
yacc -d new.y
cc lex.yy.c y.tab.c
./a.out
vi new.y
vi post.y
vi new.y
vi post.y
vi new.y
lex new.l
yacc -d post.y
cc lex.yy.c y.tab.c
vi post.y
lex new.l
yacc -d post.y
cc lex.yy.c y.tab.c
./a.out
vi post.y
vi new.l
vi post.y
lex new.l
vi post.y
lex new.l
yacc -d post.y
cc lex.yy.c y.tab.c
./a.out
lex new.l
yacc -d post.y
cc lex.yy.c y.tab.c
./a.out
vi new.y

yacc -d new.y
cc lex.yy.c y.tab.c
./a.out
vi post.y
las
ls
cd yaccstuff
ls
cd ex1
ls
lex new.l
yacc -d new.y
cc lex.yy.c y.tab.c
./a.out
cc lex.yy.c y.tab.c
./a.out
vi new.l
ls
vi new.y
lex new.l
yacc -d new.y
cc lex.yy.c y.tab.c
./a.out
ls
lex calcu.l
yacc -d calcu.y
cc lex.yy.c y.tab.c
vi calcu.y
yacc -d calcu.y
vi calcu.y
ls
vi mactofun.l
vi mactofun
vi funtomac.l
ls
vi fun2mac
vi funtomac
ls
vi if2nestedif.l
vi if2nestedif
ls
vi tokenizer.l
vi token
ls
ls
cd yaccstuff
ls
cd ex1
ls
vi post.y
ls
vi test.l
ls
vi sample.l
lex sample.l
yacc post.y
cc y.tab.c lex.yy.c
vi post.y
cc y.tab.c lex.yy.c
vi sample.l
lex sample.l
yacc post.y
cc y.tab.c lex.yy.c
vi sample.l
ls
cd yaccstuff
ls
cd ex1
ls
vi post.y
ls
vi new.y
ls
cd yaccstuff
ls
cd ex1
cd ex2
vi for.l
lex for.l
yacc -d for.y
vim for.y
lex for.l
yacc -d for.y
vim for.y
lex for.l
yacc -d for.y
vim for.y
lex for.l
yacc -d for.y
vim for.y
lex for.l
yacc -d for.y
cc lex.yy.c y.tab.c -ll
cc y.tab.c
vim for.y
cc lex.yy.c y.tab.c -ll
vim for.y
cal
ls
lex yyles.l
cc lex.yy.c -ll
./a.out < yyles
cat yyles
lex fortowhile.l
cc lex.yy.c -ll
lex for2while.l
cc lex.yy.c -ll
./a.out < fortowhile
cat fortowhile
cd yaccstuff
ls\
ls
cd ex1
ls
cat new.l
cat new.y
vi new.y
vi new.l
lex new.l
cc lex.yy.c -ll
vi test.l
lex test.l
cc lex.yy.c -ll
./a.out
vi test.l
cd ..
ls
vi tokenizer.l
ls
vi newtokenizer.l
lex newtokenizer.l
cc lex.yy.c -ll
./a.out
vi test.l
ls
vi mixedcase.l
lex  mixedcase.l
cc lex.yy.c -ll
ls
lex  switch2ifelse.l
cc lex.yy.c -ll
lex  while2for.l
cc lex.yy.c -ll
ls
vi while2for.l
rm while2for.l
ls
lex mactofun.l
cc lex.yy.c -ll
lex kK.l
cc lex.yy.c -ll
./a.out < kK
lex vowels.l
cc lex.yy.c -ll
./a.out < vowels
rm fortowhile.l
ls
vi test.l
vi test
lex test.l
cc lex.yy.c -ll
./a.out < test
lex test.l
vi test.l
cat test
lex test.l
cc lex.yy.c -ll
./a.out < test
vi test.l
lex test.l
cc lex.yy.c -ll
./a.out < test
vi test.l
ls
lex fun2mac.l
cc lex.yy.c -ll
./a.out < funtomac
lex funtomac.l
cc lex.yy.c -ll
./a.out < funtomac
rm funtomac.l
ls
lex macro2fun.l
cc lex.yy.c -ll
./a.out < macro2fun
ls
lex mactofun.l
cc lex.yy.c -ll
./a.out < mactofun
rm macro2fun
rm macro2fun.l
ls
lex newtokenizer.l
cc lex.yy.c -ll
./a.out < token
cat token
lex newtoken.l
vi newtoken.l
lex newtoken.l
cc lex.yy.c -ll
./a.out < token
ls
rm newtokenizer.l
ls
vi tokenizer.l
rm tokenizer.l
ls
cp newtoken.l tokenizer.l
ls
rm newtoken.l
ls
cd yaccstuff
cd ex1
ls
mkdir test
cp * test
cp *.*  /test
ls
cp *.l  /test
cp *.l  test
cp *.y  test
cp *.h  test
cp *.c  test
clear
;s
ls
mkdir ex2
cd ex2
vi for.l
vi for.y
cd ..
ls
cd yaccstuff
cd ex1
ls
vi new.y
cd ..
cd ex2
cd ex1
cd ex2
vi for.y
vi for.l
vi for.y
yacc -d for.y
vi for.y
yacc -d for.y
cd ..
vi new.y
cd ex2
vi for.y
yacc -d for.y
vi for.l
vi for.y
yacc -d for.y
vi for.y
yacc -d for.y
vi for.y
yacc -d for.y
vi for.l
vi for.y
yacc -d for.y
lex for.l
cc y.tab.c lex.yy.c -ll
vi for.l
yacc -d for.y
lex for.l
cc y.tab.c lex.yy.c -ll
vi for.l
vi for.y
yacc -d for.y
vi for.y
yacc -d for.y
lex for.l
cc y.tab.c lex.yy.c -ll
vi for.l
vi for.y
yacc -d for.y
lex for.l
cc y.tab.c lex.yy.c -ll
vi for.y
vi for.l
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c -ll
vi for.y
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c -ll
vi for.y
vi for.l
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c -ll
vi for.y
yacc -d for.y
lex for.
lex for.l
cc y.tab.c lex.yy.c -ll
vi for
./a.out<for
vi for
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c -ll
./a.out<for
vi for
yacc -d for.y
lex for.l
cc y.tab.c lex.yy.c -ll
./a.out<for
vi for.l
vi for.y
cat for
vi for
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c -ll
./a.out<for\
./a.out<for
cp for.l while.l
vi while.l
cp for.y while.y
vi while.y
lex while.l
yacc -d while.l
vi while.l
yacc -d while.y
lex while.l
cc y.tab.c lex.yy.c -ll
./a.out
lex while.l
yacc -d while.y
cc y.tab.c lex.yy.c -ll
./a.out
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c -ll
./a.out
vi while.y
lex for.l
lex while.y
lex while.l
yacc -d while.y
cc y.tab.c lex.yy.c -ll
./a.out
exit
ls
cd yaccstuff
ls
cd ex1
ls
cd ex2
ls
vi while.l
ls
vi while.y
ls
cd yaccstuff
ls
cd ex1
ls
cd ex2
ls
vi while.l
vi while.y
lex while.l
yacc -d while.y
ls
cd yaccstuff
cd ex1
ls
cd ex2
ls
vi while.l
vi while.y
ls
cd yaccstuff
ls
cd ex1
ls
cd ex2
ls
vi for.y
vi for.l
vi for.y
lex for.l
yacc -d for.y
wq
vi for.l
yacc -d for.y
ls
pwd
cd /home/c6i3606/yaccstuff
ls
cd /home/c6i3606
ls
vi switch2ifelse.l
cd yaccstuff
cd ex1
ls
cd ex2
ls
vi ifelse.l
cd yaccstuff
cd ex2
ls
cd ex1
l
ls
cd ex2
ls
vi while.l
vi while.y
ls
cd yaccstuff
cd ex1
cd ex2
vi ifelse.l
vi ifelse.y
vi for.y
vi ifelse.y
vi for.y
vi ifelse.y
vi for.l
vi ifelse.l
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
vi ifelse.l
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
vi ifelse.l
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
lex ifelse.l
vi ifelse.l
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out
vi ifelse.y
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out
vi ifelse.l
ls
ls -a
rm ifelse.l.swp
rm .ifelse.l.swp
ls -a
rm .ifelse.y.swp
ls -a
vi ifelse.l
vi ifelse.y
vi for.y
vi ifelse.y
vi for.y
lex ifelse.l
yacc -d ifelse.y
vi ifelse.y
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out
vi ifelse.l
vi ifelse.y
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out
vi ifelse.y
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out
vi ifelse.y
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out
vi ifelse.y
vi ifelse.l
vi ifelse
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out<ifelse
./a.out
vi ifelse.l
vi ifelse.y
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out
vi ifelse.l
vi ifelse.y
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out
vi ifelse.l
./a.out<ifelse

vi ifelsenew.l
vi ifelsenew.y
yacc -d ifelsenew.y
lex ifelsenew.l
cc y.tab.c lex.yy.c
vi ifelse.l
vi ifelsen.l
vi ifelsenew.y

yacc -d ifelsenew.y
cc y.tab.c lex.yy.c
./a.out
./a.out<ifelse
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out<ifelse
./a.out
ls
vi while.l
vi ifelsenew.y
vi ifelsenew.l
vi ifelsenew.y
les ifelsenew.l
lex ifelsenew.l
yacc -d ifelsenew.y
cc y.tab.c lex.yy.c
./a.out<ifelse
vi ifelsenew.l
vi ifelse
vi ifelsenew.y
lex ifelsenew.l
cc y.tab.c lex.yy.c
./a.out<ifelse
lex ifelsenew.l
yacc -d ifelsenew.y
cc y.tab.c lex.yy.c
./a.out<ifelse
vi ifelsenew.y
lex ifelsenew.l
yacc -d ifelsenew.y
cc y.tab.c lex.yy.c
./a.out<ifelse
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out
ls
cd ex1
cd yaccstuff
cd es1
cd ex1
cd ex2
vi switch.l
vi switch.y
lex switch.l
yacc switch.y
yacc -d switch.y
cc y.tab.c lex.yy.c
./a.out
exit
ls
cd yaccstuff
cd ex1
cd ex2
ls
vi ifelse.l
vi ifelse.y
lex ifelse.l
yacc -d ifelse.y
vi ifelse.y
vi ifelse.l
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c -ll
./a.out
vi ifelse.l
vi ifelse.y
vi ifelse.l
ls
lex for.l
yacc -d for.y
wq
ls
vi switch.l
ls
vi switch.l
lex switch.l
yacc switch.y
cc y.tab.c lex.yy.c -ll
./a.out
vi switch.l
vi switch.y
ls
lex switch.l
yacc switch.y
cc y.tab.c lex.yy.c -ll
./a.out
lex while.l
yacc while.y
lex while.l
yacc while.y
lex ifelse.l
yacc ifelse.y
cc y.tab.c lex.yy.c -ll
vi while.l
vi while.y
yacc ifelse.y
cc y.tab.c lex.yy.c -ll
vi while.l
ls
lex ifelsenew.l
yacc ifelsenew.y
cc y.tab.c lex.yy.c -ll
cal
ls
vi fun2mac.l
ls
vi mactofun.l
lex mactofun.l
cc lex.yy.c -ll
./a.out
cd yaccstuff
cd ex2
cd ex1
cd ex2
ls
vi for.l
vi ifelse.l
ls
lex mactofun.l
cc lex.yy.c
cc lex.yy.c -ll]
cc lex.yy.c -ll
.a/.out < mactofun
./a.out < mactofun
cat mactofun
ls
vi if2nestedif.l
ls
cd yaccstuff
ls
cd ex1
ls
vi calcu.y
ls
vi new.y
ls
vi ex2
ls
cd yaccstuff
ls
cd ex1
ls
cd ..
ls
cd yaccstuff
ls
vi ex1
cd ex1
ls
cd ex2
ls
lex ifelse.l
yacc -d ifelse.y
cc lex.yy.c y.tab.c -ll
./a.out < ifelse
vi if else
vi ifelse
vi ifelse.l
vi ifelse.y
cc lex.yy.c y.tab.c -ll
vi ifelse.l
vi ifelse.y
ls
cd yaccstuff
ls
cd ex1
ls
vi new.y
ls
vi new.l
ls
vi yaccstuff
cd yaccstuff
ls
cd ex1
ls
cd ex1
cd ex2
ls
s
ls
cd ..
ls
cd test
ls
cd ..
ls
cd ..
ls
