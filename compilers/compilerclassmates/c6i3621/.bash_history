./a.out
lex cal.l
vi cal.l
vi cal.y
lex cal.l
yacc -d cal.y
cc lex.yy.c y.tab.c
./a.out
vi cal.l
vi cal.y
lex cal.l
yacc -d cal.y
cc lex.yy.c y.tab.c
vi cal.y
lex cal.l
yacc -d cal.y
cc lex.yy.c y.tab.c
./a.out
vi cal.l
lex cal.l
yacc -d cal.y
cc lex.yy.c y.tab.c
./a.out
vi cal.y
./a.out
vi cal.y
lex cal.l
yacc -d cal.y
cc lex.yy.c y.tab.c
./a.out
vi cal.l
vi cal.y
lex cal.l
yacc -d cal.y
cc lex.yy.c y.tab.c
./a.out
vi cal.y
lex cal.l
yacc -d cal.y
cc lex.yy.c y.tab.c
./a.out
vi cal_p.y
cp cal.y cal_1.y
vi cal_1.y
lex in.l
lex calc.l
lex cal.l
yacc -d cal_1.y
cc lex.yy.c y.tab.c
./a.out
vi cal.l
lex cal.l
vi cal.l
lex cal.l
yacc -d cal_1.y
cc lex.yy.c y.tab.c
./a.out
vi cal_1.f
vi cal_1.y
lex cal.l
yacc -d cal.y
cc lex.yy.c y.tab.c
./a.out
lex cal.l
yacc -d cal_1.y
cc lex.yy.c y.tab.c
./a.out
vi cal_1.y
vi cal.l
lex cal.l
yacc -d cal.y
cc lex.yy.c y.tab.c
./a.out
vi cal.l
vi cal.y
lex cal.l
yacc -d cal.y
cc lex.yy.c y.tab.c
./a.out
lex cal.y
lvi cal.y
vi cal.y
lex cal.l
yacc -d cal_1.y
cc lex.yy.c y.tab.c
./a.out
lex cal.l
yacc -d cal.y
vi cal.y
lex cal.l
yacc -d cal.y
vi cal.y
lex cal.l
yacc -d cal.y
vi cal.y
lex cal.l
yacc -d cal.y
cc lex.yy.c y.tab.c
./a.out
vi cal_1.y
lex cal.l
yacc -d cal_1.y
cc lex.yy.c y.tab.c
vi cal_1.y
cc lex.yy.c y.tab.c
vi cal_1.y
lex cal.l
yacc -d cal_1.y
cc lex.yy.c y.tab.c
vi cal_1.y
lex cal.l
yacc -d cal_1.y
cc lex.yy.c y.tab.c\
cc lex.yy.c y.tab.c
./a.out
vi cal_1.l
vi cal_1.y
lex cal.l
yacc -d cal_1.y
cc lex.yy.c y.tab.c
./a.out
vi cal_1.y
lex cal.l
yacc -d cal_1.y
cc lex.yy.c y.tab.c
./a.out
ls
cd yacc
mkdir yacc
cd yacc
mkdir infix
cd infix
vi in.l
lex in.l
cc lex.yy.c -ll
vi in.l
lex in.l
cc lex.yy.c -ll
vi in.txt
./a.out<in.txt
vi in.txt
vi in.l
lex in.l
cc lex.yy.c -ll
./a.out<in.txt
vi in.l
lex in.l
cc lex.yy.c -ll
./a.out<in.txt
vi in.l
vi in.yacc
vi in.y
yacc in.y
ls
lex in.l
yacc in.y
cc y.tab.c lex.yy.c -ll
cc y.tab.c lex.yy.c
cc y.tab.c lex.yy.c -ll
vi in.y
lex in.l
yacc in.y
cc y.tab.c lex.yy.c -ll
vi in.y
vi in.l
lex in.l
yacc in.y
cc y.tab.c lex.yy.c -ll
vi in.y
yacc in.y
cc y.tab.c lex.yy.c -ll
vi in.y
lex in.l
yacc in.y
vi in.y
vi in.l
vi in.y
lex in.l
yacc in.y
cc y.tab.c lex.yy.c -ll
vi in.y
ls
cd yacc
ls
cd pos
exit
ls
cd yacc
ls
cd calc
ls
vi cal_1.l
ls
vi cal.l
ls
vi cal.y
ls
mkdir today
cd today
vi testyacc.y
vi testlex.l
ls
cd today
ls
lex testlex.l
yacc -d testyacc.y
vi testyacc.y
ls
cd yacc
ls
cd pos
cd ..
cd pos
ls
cd..
cd ..
cd infix
ls
cd ..
ls
cd pos
ls
vi pos.l
ls
vi pos
vi pos.y
lex pos.l
yacc -d pos.y
vi pos.y
lex pos.l
yacc -d pos.y
vi pos.y
lex pos.l
yacc -d pos.y
cc lex.yy.c y.tab.h -ll
vi pos.l
lex pos.l
yacc -d pos.y
cc lex.yy.c y.tab.h -ll
./a.out
cc lex.yy.c y.tab.h -ll
lex pos.l
yacc -d pos.y
cc lex.yy.c -ll
lex pos.l
yacc -d pos.y
lex pos.l
cc lex.yy.c y.tab.h
vi pos.l
ls
vi pos.y
vi pos.l
yacc -d pos.y
lex pos.l
cc lex.yy.c y.tab.h
vi pos.l
vi pos.y
yacc -d pos.y
lex pos.l
cc lex.yy.c y.tab.h
vi pos.l
yacc -d pos.y
lex pos.l
cc lex.yy.c y.tab.h
cc lex.yy.c y.tab.h -ll
cc lex.yy.c y.tab.c
yacc pos.y
lex pos.l
cc lex.yy.c y.tab.h
cc lex.yy.c y.tab.h -ll
cc lex.yy.c y.tab.c -ll
vi pos.l
yacc pos.y
lex pos.l
cc lex.yy.c y.tab.c
cc lex.yy.c y.tab.c -ll
./a.out
cc lex.yy.c y.tab.h -ll
cd ..
cd pos_1
mkdir pos_1
cd pos_1
vi pos.l
vi pos.y
lex pos.l
yacc pos.y
cc y.tac.c ll -ly
cc y.tac.c -ll -ly
cc y.tac.h -ll -ly
cc y.tab.c -ll -ly
lex pos.l
yacc -d pos.y
cc y.tab.c -ll -ly
vi pos.y
vi lex.l
vi pos.l
lex pos.l
yacc -d pos.y

vi pos.l
vi pos.y
vi pos.l
vi pos.y
vi pos.l
lex pos.l
yacc -d pos.y
cc y.tab.c -ll -ly
vi pos.y
vi pos.l
lex pos.l
yacc -d pos.y
cc y.tab.c -ll -ly
vi pos.y
lex pos.l
yacc -d pos.y
cc y.tab.c -ll -ly
vi pos.y
vi pos.l
lex pos.l
yacc -d pos.y
cc y.tab.c -ll
cc lex.yy.c y.tab.c -ll
vi pos.l
lex pos.l
yacc -d pos.y
cc lex.yy.c y.tab.c -ll
vi pos.y
lex pos.l
yacc -d pos.y
cc lex.yy.c y.tab.c -ll
vi pos.y
lex pos.l
cc lex.yy.c y.tab.c -ll
lex pos.l
yacc -d pos.y
cc lex.yy.c y.tab.c -ll
cc lex.yy.c y.tab.h -ll
cc lex.yy.c y.tab.h 
cc -o lex.yy.c y.tab.h 
./a.out
cc -o lex.yy.c y.tab.h 
cc -o lex.yy.c y.tab.c 
cc -o lex.yy.c y.tab.c -ll
cc -o yy.tab.c lex.yy.c
cc -o yy.tab.c lex.yy.c -ll -ly

cc  yy.tab.c lex.yy.c -ll
lex pos.l
yacc -d pos.y
cc  yy.tab.c lex.yy.c -ll
cc yy.tab.c lex.yy.c -ll
cc yy.tab.h lex.yy.c -ll
cc y.tab.h lex.yy.c -ll
cc y.tab.c lex.yy.c -ll
cc y.tab.h lex.yy.c -ll
cc y.tab.c lex.yy.c -ll
vi pos.y
lex pos.l
yacc -d pos.y
cc y.tab.h lex.yy.c -ll
cc y.tab.c lex.yy.c -ll
lex pos.l
cc y.tab.c lex.yy.c -ll -o
cc -o y.tab.c lex.yy.c -ll
cc -o y.tab.c lex.yy.c -ll -lfl
cc -o y.tab.c lex.yy.c -ll
vi pos.l
lex pos.l
yacc -d pos.y
cc -o y.tab.c lex.yy.c -ll
vi pos.l
lex pos.l
yacc -d pos.y
cc -o y.tab.c lex.yy.c -ll
vi pos.l
cc -o y.tab.c lex.yy.c -ll
cc -o y.tab.h lex.yy.c -ll
cc -o y.tab.c lex.yy.c -ll
vi pos.l
lex pos.l
yacc -d pos.y
cc -o y.tab.c lex.yy.c -ll
./a.out
cc  y.tab.c lex.yy.c -ll
cc -o y.tab.h lex.yy.c -ll
./a.out
ls
cc  y.tab.c lex.yy.c -ll
cc  y.tab.c lex.yy.c -ll -lyl
cc  y.tab.c lex.yy.c -ll -lly
cc  y.tab.c lex.yy.c -ll -ly
cc  -0 y.tab.c lex.yy.c -ll -ly
cc  -o y.tab.c lex.yy.c -ll -ly
cc -o y.tab.c lex.yy.c -ll -ly
cc -o y.tab.c lex.yy.c -ll
lex pos.l
yacc -d pos.y
cc  y.tab.c lex.yy.c -ll
vi pos.l
vi pos.h
vi pos.y
lex pos.l
yacc -d pos.y
cc  y.tab.c lex.yy.c -ll
vi pos.y
lex pos.l
yacc -d pos.y
cc  y.tab.c lex.yy.c -ll
vi pos.l
lex pos.l
yacc -d pos.y
cc  y.tab.c lex.yy.c -ll
vi pos.y
lex pos.l
yacc -d pos.y
cc  y.tab.c lex.yy.c -ll
vi pos.y
lex pos.l
yacc -d pos.y
cc  y.tab.c lex.yy.c -ll
vi pos.y
lex pos.l
cc  y.tab.c lex.yy.c -ll
yacc -d pos.y
cc  y.tab.c lex.yy.c -ll
ls
rm y.tab.c
rm y.tab.h
rm y.tab.h.gch
rm yy.lex.c
rm lex.yy.c
rm pos.h
lex pos.l
yacc -d pos.y
cc  y.tab.c lex.yy.c -ll
cc lex.yy.c y.tab.c -ll
lex pos.lls
ls
cc lex.yy.c y.tab.h -ll
./a.out
cd ..\
cd ..
ls
la
ls

ls
lex testlex.l
vi testlex.l
lex testlex.l
ls
vi testyacc.y
yacc -d testyacc.y
vi testyacc.y
yacc -d testyacc.y
./a.out
cc lex.yy.c y.tab.c -ll
cc lex.yy.c y.tab.h -ll
cd ..
mkdir while
cd while
vi while.l
cd ..
ls
cd today
ls
lex testlex.l
yacc -d testyacc.y
cc lex.yy.c y.tab.c -ll
vi testlex.l
lex testlex.l
yacc -d testyacc.y
cc lex.yy.c y.tab.c -ll
vi testlex.y
ls
vi testyacc.y
lex testlex.l
yacc -d testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
20/
./a.out\
./a.out
vi testyacc.y
lex testlex.l
yacc -d testyacc.y
./a.out
cd ..
ls
cd for
mkdir for
cd for
vi for.l
vi for.y
vi for.l
vi for.y
vi for.l
vi for.y
lex for.l
yacc -d for.y
vi for.y
yacc -d for.y
vi for.y
yacc -d for.y
lex for.l
cc lex.yy.c y.tab.c -ll
vi for.l
lex for.l
yacc -d for.y
cc lex.yy.c y.tab.c -ll
vi for.l
lex for.l
yacc -d for.y
cc lex.yy.c y.tab.c -ll
vi for.l
lex for.l
cc lex.yy.c y.tab.c -ll
yacc -d for.y
cc lex.yy.c y.tab.c -ll
vi for.l
lex for.l
yacc -d for.y
cc lex.yy.c y.tab.c -ll
cc lex.yy.c y.tab.h -ll
./a.out
vi while.txt
cc y.tab.c 
cc y.tab.c -ll
./a.out
./a.out<while.txt
vi for.l
lex for.l
yacc -d for.y
cc y.tab.c -ll
./a.out
./a.out<while.txt
vi while.txt
./a.out<while.txt
lex for.l
yacc -d for.y
cc y.tab.c -ll
./a.out<while.txt
vi for.y
lex for.l
cc y.tab.c -ll
yacc -d for.y
cc y.tab.c -ll
vi for.y
lex for.l
yacc -d for.y
cc y.tab.c -ll
./a.out
./a.out<while.txt
vi while.txt
lex for.l
yacc -d for.y
./a.out<while.txt
cc y.tab.c -ll
./a.out<while.txt
vi while.txt
lex for.l
yacc -d for.y
./a.out<while.txt
vi while.txt
./a.out<while.txt
vi while.txt
./a.out<while.txt
vi while.txt

vi while.txt
./a.out<while.txt
vi while.y
ls
vi while.y
ls
vi for.y
lex for.l
yacc -d for.y
vi for.y
ls
vi token.l
vi token.txt
ls
cd pos_1
ls
lex pos.l
yacc pos.y
cc lex.yy.c y.tab.c -ll
cc lex.yy.c y.tab.c
cc lex.yy.l y.tab.c -ll
cc lex.yy.c y.tab.c -ll
ls
vi pos.l
vi pos.y
ls
cd if_yac
ls
vi if.y
vi if.l
vi if.y
ls
vi if.txt
./a.out<if.txt
ls
lex if.l
yacc if.y
cc lex.yy.c y.tab.c -ll
ls
cc lex.yy.c y.tab.h -ll
./a.out<if.txt
ls
cd for_yacc
lex for.l
yacc -d for.y
cc lex.yy.c y.tab.c -ll
cd ..
mkdir switch_yac
cd switch_yac
vi switch.l
vi switch.y
vi switch.l
lex switch.l
yacc -d switch.y
cc y.tab.c -ll
vi switch.l
lex switch.l
yacc -d switch.y
cc y.tab.c -ll
vi switch.txt
vi switch.l
./a.out<switch.txt
vi switch.txt
./a.out<switch.txt
vi switch.txt
./a.out<switch.txt
vi switch.txt
lex switch.l
yacc -d switch.y
cc y.tab.c -ll
./a.out<switch.txt
vi switch.y
./a.out<switch.txt
vi switch.txt
./a.out<switch.txt
vi switch.y
./a.out<switch.txt
vi switch.txt
vi switch.l
./a.out<switch.txt
vi switch.txt
./a.out<switch.txt
lex switch.l
yacc -d switch.y
./a.out<switch.txt
vi switch.txt
./a.out<switch.txt
vi switch.txt
./a.out<switch.txt
vi switch.txt
cd ..
ls
cd for_y
mkdir for_y
cd for_y
vi for.l
vi for.y
lex for.l
yacc -d for.y
cc lex.yy.c y.tab.c -ll
vi for
./a.out<for
vi for.y
lex for.l
yacc -d for.y
cc lex.yy.c y.tab.c -ll
./a.out<for
vi for
./a.out<for
vi for
./a.out<for
vi for.y
./a.out<for
vi for.y
vi for
./a.out<for
cd ..
ls
cd if_yac
ls
lex if.y
lex if.l
yacc -d if.y
cc y.tab.c -ll
./a.out<if.txt
vi if.txt
./a.out<if.txt
cd ..
ls
cd switch_yac
ls
vi switch.l
vi switch.y
lex switch.l
yacc -d switch.y
cc lex.yy.c y.tab.c -ll
./a.out<switch.txt
vi switch.txt
./a.out<switch.txt
vi switch.txt
./a.out<switch.txt
ls
cd for_yacc
ls
vi for.y
vi for.l
lex for.l
vi for.l
lex for.l
yacc -d for.y
vi for.y
vi for.l
vi for.y
yacc -d for.y
cc lex.yy.c y.tab.c -ll
cc y.tab.c -ll
vi for.l
lex for.l
yacc -d for.y
cc y.tab.c -ll
vi for.l
lex for.l
yacc -d for.y
cc y.tab.c -ll
vi for.y
cc y.tab.c -ll
vi for.y
lex for.l
yacc -d for.y
cc y.tab.c -ll
vi for.y
lex for.l
yacc -d for.y
cc y.tab.c -ll
cc y.tab.c lex.yy.c -ll
vi for.l
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c -ll
vi for.l
vi for.y
vi for.l
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c -ll
vi for.l
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c -ll
cc y.tab.c -ll
cc y.tab.c lex.yy.c -ll
vi for.y
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c -ll
lex for.y
vi for.y
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c -ll
vi for.l
vi for.y
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c -ll
vi for.l
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c -ll
vi for.l
vi for.y
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c -ll
vi lex.yy.c
vi for.l
vi for.y
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c -ll
vi for.y
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c -ll
cc y.tab.c -ll
vi for.y
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c -ll
cc y.tab.c -ll
ls
cc lex.yy.c -ll
vi for.l
lex for.l
yacc -d for.y
cc y.tab.c -ll
cc y.tab.c lex.yy.c -ll
cd ..
cd while
ls
cd ..
cd for
ls
vi for.l
vi for.y
ls
lex for.l
yacc -d for.y
cc lex.yy.c y.tab.c -ll
vi for.l
lex for.l
yacc -d for.y
cc lex.yy.c y.tab.c -ll
vi for.y
lex for.l
cc lex.yy.c y.tab.c -ll
vi for.y
lex for.l
yacc -d for.y
cc lex.yy.c y.tab.c -ll
ls
cc y.tab.c -ll
cd ..
vi if_yacc
cd if_yacc
mkdir if_yacc
mkdir if_yac
cd if_yac
vi if.l
vi if.y
vi if.l
lex if.l
vi if.l
lex if.l
vi if.l
lex if.l
vi if.l
vi if.y
vi if.l
lex if.l
yacc -d if.y
vi if.y
lex if.l
yacc -d if.y
cc lex.yy.c y.tab.c -ll
vi if.y
vi if.l
lex if.l
yacc -d if.y
cc lex.yy.c y.tab.c -ll
cc y.tab.c -ll
vi if.l
lex if.l
yacc -d if.y
cc y.tab.c -ll
vi if.txt
vi if.y
lex if.l
yacc -d if.y
vi if.l
lex if.l
yacc -d if.y
vi if.y
lex if.l
yacc -d if.y
cc y.tab.c -ll
vi if.txt
./a.out<if.txt
cd..
vi if.l
vi switch.y
vi if.y
cd for_y
ls
vi for.y
vi for.l
ls
cd for_y
ls
vi for.y
vi for.l
ls
./a.out<for
vi for
ls
cd ..
ls
cd switch_yacc
ls
cd switch_yac
ls
vi switch.txt
ls
vi switch.y
vi switch.l
./a.out<switch.txt
ls
vi switch.txt
cd for_y
ls
lex for.l
yacc for.y
cc lex.yy.c y.tab.c -ll
./a.out < for
vi for
./a.out < for
vi for
./a.out < for
vi for.l
vi for.y
ls
cd ..
ls
cd switch_yac
ls
vi switch.l
vi switch.y
vi switch
vi switch.txt
ls
cd if_yac
ls
vi if.l
vi if.y
ls
cd while
ls
cd ..
cd for
ls
vi while.y
ls
vi for.l
vi for.y
vi for.l
vi for.y
vi for.l
lex for.l
yacc -d for.y
cc lex.yy.c y.tab.c -ll
cc lex.yy.c y.tab.h -ll
vi for.l
vi for.y
ls
lex for.l
yacc -d for.y
cc yy.tab.h
cc yy.tab.c
yacc -d for.y
cc y.tab.c
vi for.y
cc y.tab.c
vi for.y
lex for.l
yacc -d for.y
cc yy.tab.c
cc yy.tab.c lex.yy.c
yacc -d for.y
lex for.l
ls
rm y.tab.c
rm y.tab.h
rm y.tab.h.gch
lex for.l
yacc -d for.y
cc yy.tab.c lex.yy.c
cc yy.tab.c
cc y.tab.c
cc y.tab.c lex.yy.c
cc y.tab.c lex.yy.c -ll
cc y.tab.c
vi for.y
lex for.l
yacc -d for.y

ls
cc y.tab.c lex.yy.c -ll
cc y.tab.c -ll
ls
./a.out<while.txt
vi while.txt
cd ..
mkdir for_yacc
cd for_yacc
vi for.l
vi for.y
ls
cd if_yac
ls
vi if.l
vi if.y
