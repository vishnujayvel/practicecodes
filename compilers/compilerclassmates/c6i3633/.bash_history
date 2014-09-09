                                if(flag==0){
                                        strcpy(data[d++],yytext);
                                        }
                                }
{keywords}      {
                                int i;
                                int flag=0;
                                for(i=0;i<k;i++){
                                        if(strcmp(yytext,key[i])==0){
                                                flag=1;
                                                break;
                                        }
                                }
                                if(flag==0){
                                strcpy(key[k++],yytext);
                                }
{operators}     {
                                int i;
                                int flag=0;
                                for(i=0;i<opt;i++){
                                        if(strcmp(yytext,operator[i])==0){
                                                flag=1;
                                                break;
                                        }
                                }
                                if(flag==0){
                                        strcpy(operator[opt++],yytext);
                                }
{identifiers}   {
                                int i;
                                int flag=0;
                                for(i=0;i<id;i++){
                                        if(strcmp(yytext,iden[i])==0){
                                                flag=1;
                                                break;
                                        }
                                }
                                if(flag==0){
                                strcpy(iden[id++],yytext);
                                }
{identifiers}(\(\))     {printf("Functions= %s \n",yytext);}
[0-9]+  {strcpy(operand[opd++],yytext);}
.       | \n      ;
%%
int yywrap(){
        return 1;
}
int main(){
        int i;
        yylex();
        printf("\nData Types\n");
        for(i=0;i<d;i++)
        printf("%s\n",data[i]);
        printf("\nKeywords\n");
        for(i=0;i<k;i++)
            printf("%s\n",key[i]);
        printf("\nOperators\n");
        for(i=0;i<opt;i++)
           printf("%s\n",operator[i]);
        printf("\nidentifiers\n");
        for(i=0;i<id;i++)
           printf("%s\n",iden[i]);
        printf("\nOperands\n");
        for(i=0;i<opd;i++)
           printf("%s\n",operand[i]);
        return 1;
}
cat tokenizer.l 
lex tokenizer.l 
vi tokenizer.l 
ls
cat input
cd ./..
ls
cat nestedif.l 
ls
cat nesedifip
cat nesedip
cat nestip
cat nestifip
vim nestedif.l
s
cat fortowhile.l
vim nestedif.l
lex nestedif.l
ls
gcc lex.yy.c
./a.out
vim nestedif.l
lex nestedif.l
gcc lex.yy.c
./a.out
vim nestedif.l
lex nestedif.l
vim nestedif.l -ll
lex nestedif.l
gcc lex.yy.c -ll
./a.out
vim nestedif.l 
ls
cat input
cat input1
cat input12
cat input2
cat input3
vim nestedif.l 
lex nestedif.l 
gcc lex.yy.c -ll
./a.out 
vim nestedif.l 
lex nestedif.l 
gcc lex.yy.c -ll
./a.out 
vim nestedif.l 
lex nestedif.l 
gcc lex.yy.c -ll
./a.out 
vim nestedif.l 
ls
cat input
ls
vim nestedif.l 
ls
cat input1
cat input
cat input2
cat input3
vim nestedif.l 
lex nestedif.l 
vim nestedif.l 
lex nestedif.l 
vim nestedif.l 
lex nestedif.l 
vim nestedif.l 
lex nestedif.l 
vim nestedif.l 
lex nestedif.l 
gcc lex.yy.c -ll
./a.out 
vim nestedif.l 
lex nestedif.l 
gcc lex.yy.c -ll
./a.out 
vim nestedif.l 
./a.out 
vim nestedif.l 
./a.out 
vim nestedif.l 
lex nestedif.l 
gcc lex.yy.c -ll
./a.out
vim nestedif.l 
./a.out 
lex nestedif.l 
gcc lex.yy.c -ll
./a.out 
vim nestifip
./a.out < nestifip
cat nestifip
vim nestifip
./a.out < nestifip
vim nestifip
./a.out < nestifip
vim nestedif.l 
lex nestedif.l 
gcc lex.yy.c -ll
./a.out < nestifip
vim nestifip
./a.out < nestifip
lex nestedif.l 
vim nestedif.l 
./a.out < nestifip
lex nestedif.l 
gcc lex.yy.c -ll
./a.out < nestifip
vim nestip
ls
cat nestedifip
cat nestifip
vim nestifip
./a.out < nestifip
cat nestifip
./a.out < nestifip
vim nestifip
./a.out < nestifip
vim token.l
lex token.l
gcc lex.yy.c -ll
vim token.l
lex token.l
gcc lex.yy.c -ll
./a.out
vim token.l
ls
lex token.l
vim token.l
lex token.l
vim token.l
lex token.l
gcc lex.yy.c -ll
vim token.l
gcc lex.yy.c -ll
vim token.l
lex token.l
gcc lex.yy.c -ll
vim token.l
lex token.l
gcc lex.yy.c -ll
vim token.l
lex token.l
gcc lex.yy.c -ll
./a.out
vim token.l
lex token.l
gcc lex.yy.c -ll
./a.out
vim token.l
scp -r c6i3632@10.1.4.6:lex_programs/14_02_03/tokenizer/tokenizer.l .
ls
scp -r c6i3632@10.1.4.6:lex_programs/14_02_03/tokenizer/tokenizer.l .
scp -r c6i3632@10.1.4.6:lex_programs/14_02_03/tokenizer .
ls
man scp
man rcp
man rcp1
man rcp(1)
man rcp 1
clear
ls 
cd tokenizer
ls
cat input
lex tokenizer.l
gcc lex.yy.c
gcc lex.yy.c -ll
cat input
./a.out < input
vim input
./a.out < input
ls
vim tokenizer.l
ls
cd tokenizer
ls
vi tokenizer.l
ls
lex tokenizer.l
gcc lex.yy.c -ll
./a.out
vi tokenizer.l
ls
lex nestedif.l
gcc lex.yy.c -ll
./a.out
./a.out < nestifip
clear
vim ifip
./a.out < ifip
vim nestifip
vim ifip
./a.out < ifip
vim nestifip
vim ifip
./a.out < ifip
vim ifip
./a.out < ifip
lex nestedif.l
gcc lex.yy.c -ll
./a.out < ifip
vim ifip
lex nestedif.l
gcc lex.yy.c -ll
./a.out < ifip
vim ifip
lex tokenizer.l
gcc lex.yy.c -ll
./a.out
lex nestedif.l
gcc lex.yy.c -ll
./a.out < ifip
vim ifip
ls
cd yacc
vim for.l
vim for.y
scp -r -P 22 c6i3071@10.1.4.6/ex3.l
scp -r -P 22 c6i3071@10.1.4.6:ex3.l
scp c6i3071@10.1.4.6:ex3.l c6i3633@10.1.4.6:
scp c6i3071@10.1.4.6:ex3.y  c6i3633@10.1.4.6
scp c6i3071@10.1.4.6:ex3.y  c6i3633@10.1.4.6:
ls
scp c6i3071@10.1.4.6:ex3.y  c6i3633@10.1.4.6:copy1.y
scp c6i3071@10.1.4.6/ex3.y  c6i3633@10.1.4.6/copy1.y
scp c6i3071@10.1.4.6/yacc/ex3.y  c6i3633@10.1.4.6
scp c6i3071@10.1.4.6/yacc:ex3.y  c6i3633@10.1.4.6
mkdir yacc
cd yacc
vim for.y
vim calc.l
ls
vim calc.y
yacc -d calc.y
ls
lex calc.l
gcc lex.yy.c
clear
ls
gcc y.tab.c lex.yy.c
clear
ls
lex clac.l
lex calc.l
yacc -d calc.y
gcc y.tab.c lex.yy.c
vim calc.l
lex calc.l
yacc -d calc.y
gcc y.tab.c lex.yy.c
vim calc.l
lex calc.l
yacc -d calc.y
gcc y.tab.c lex.yy.c
vim calc.l
vim calc.y
vim calc.l
yacc -d calc.y
lex calc.l
gcc y.tab.c lex.yy.c
vim calc.y
yacc -d calc.y
lex calc.l
gcc y.tab.c lex.yy.c
vim  calc.l
yacc -d calc.y
vim calc.y
vim calc.l
lex calc.l
yacc -d calc.y
lex calc.l
gcc y.tab.c lex.yy.c
vim calc.l
yacc -d calc.y
lex calc.l
gcc y.tab.c lex.yy.c
vim calc.y
vim calc.l
yacc -d calc.y
lex calc.l
gcc y.tab.c lex.yy.c
./a.out
lex calc.y
vim calc.y
yacc -d calc.y
lex calc.y
lex calc.l
gcc y.tab.c lex.yy.c
./a.out
man scp
CLEAR
clear
ls
vim for.y
ls
vim calc.y
vim calc.l
vim calc.y
ls
yacc -d calc.y
lex calc.l
gcc y.tab.c lex.yy.c
./a.out
vim calc.y
vim postfix.y
ls
vim calc.y
cp calc.y postfix.y
vim postfix.y
yacc -d postfix.y
lex calc.l
gcc y.tab.c lex.yy.c
./a.out
vim postfix.y
yacc -d postfix.y
lex calc.l
gcc y.tab.c lex.yy.c
./a.out
vim postfix.y
yacc -d postfix.y
lex calc.l
gcc y.tab.c lex.yy.c
./a.out
vim postfix.y
vim calc.l
yacc -d calc.y
yacc -d postfix.y
gcc y.tab.c lex.yy.c
./a.out
yacc -d calc.y
lex calc.l
gcc y.tab.c lex.yy.c
./a.out
ls
vi calc.y
ls
cd yacc
ls
cat for.y
ls
ls -a
cd .
ls
vi while.y
vi while.l
vi while
lex while.l
yacc -d y.tab.c
vi while.y
lex while.l
yacc -d y.tab.c
lex while.l
yacc -d while.y
cc y.tab.c 
./a.out < while
vi while.y
vi while.l
vi while
lex while.l
yacc -d while.y
cc y.tab.c 
lex while.l
yacc -d while.y
cc y.tab.c -ll
./a.out < while
vi while.y
vi while.l
vi while
lex while.l
yacc -d while.y
cc y.tab.c -ll
./a.out < while
exit
cd yacc
vim for.l
vim ifelse.l
vim for.l
vim ifelse..l
vim ifelse.l
lex ifelse.l
gcc y.tab.c
./a.out
vim ifelse.l
lex ifelse.l
vim ifelse.l
vim for.l
vim if.l
rm -r if.l
vim ifelse.l
lex ifelse.l
vim ifelse.l
ls
cd yacc/
ls
vi for.l
vi for.y
lex for.l
yacc -d for.y
gcc y.tab.c lex.yy.c
gcc y.tab.c < for
gcc y.tab.c 
./a.out < for
vi for.y
vi for.l
vi for.y
\
lex for.l
yacc -d for.y
gcc y.tab.c 
./a.out 
vi for.y
vi for.l
ls
cd yacc
ls
vi if.l
vi ifelse.y
ls
cd yacc
ls
vim for.y
ls
vim ifelse.l
vim ifelse.y
vim ifelse.l
vim ifelse.y
ls
vim ifelse.y
vim for.y
vim ifelse.y
lex iflelse.l
ls
lex ifelse.l

vim ifelse.l
vim  ifelse.y
vim  for.y
vim if.l
vim ifelse.l
vim if.l
vim ifelse.l
vim if.l
vim ifelse.y
lex if.l
yacc ifelse.y
gcc y.tab.c
./a.out < if
vim if
./a.out < if
vim if
vim ifelse.y
lex if.l
yacc ifelse.y
gcc y.tab.c
./a.out < if
vim if.l
vim switch.y
vim switch
vim switch.l
lex switch.l
yacc switch.y
vim switch.y
ls
lex for.l
yacc for.y
vim for.y
yacc for.y
vim for.y
yacc for.y
vim for.y
yacc for.y
gcc y.tab.c
cat for
vim for\
vim for
./a.out < for
lex for.l
yacc for.y
gcc y.tab.c
./a.out<for
vim for.y
lex for.l
yacc for.y
gcc y.tab.c
vim for.y
lex for.l
yacc for.y
gcc y.tab.c
./a.out < for
vim while.y
lex while.l
yacc while.y
gcc y.tab.c
./a.out < while
vim while
./a.out < while
vim while
./a.out < while
vim while
./a.out < while
vim while.y
lex while.l
yacc while.y
gcc y.tab.c
./a.out < while
vim while
./a.out < while
ls
lex if.l
yacc ifelse.y
gcc y.tab.c
cat if
./a.out < if
lex if.l
vim if
./a.out < if
cat if
./a.out < if
vim if
./a.out < if
vim if
./a.out < if
vim if
./a.out < if
vim if
./a.out < if
vim elseif
vim if
./a.out < if
lex switch.l
yacc switch1.y
gcc y.tab.c
./a.out < switch
vim switch
cat switch
./a.out < switch
vim switch
./a.out < switch
vim switch
./a.out < switch
ls
cd yacc
ls
vim for.y
ls
vim for.l
yacc for.y
lex for.l
gcc y.tab.c lex.yy.c 
vim for.l
gcc y.tab.c 
./a.out < for
ls
vim for
./a.out < for
vim for.l
vim for
./a.out < for
./a.out
clear
vim for.l
vim for.y
vim ifelse.l
lex ifelse.l
vim ifelse.y
yacc ifelse.y
vim ifelse.y
yacc ifelse.y
vim for.l
vim ifelse.y
vim for.y
vim ifelse.ywq
vim ifelse.y
vim for.l
vim if.l
lex if.l
vim if.l
yacc ifelse.y
lex if.l
vim lex.l
rm -r lex.l
vim if.l
lex if.l
vim if.l
lex if.l
vim if.l
lex if.l
vim if.l
lex if.l
vim if.l
lex if.l
vim if.l
lex if.l
yacc ifelse.y
gcc y.tab.c
./a.out
lex if.l
yacc ifelse.y
gcc y.tab.c
./a.out
vim ifelse.y
lex if.l
yacc ifelse.y
vim ifelse.y
lex if.l
yacc ifelse.y
gcc y.tab.c
./a.out
vim ifelse.y
vim for
vim if
lex if.l
vim ifelse.y
wq!
lex if.l
vim if
ls
lex if.l
yacc ifelse.y
gcc y.tab.c
lex if.l
yacc ifelse.y
gcc y.tab.c
./a.out
vim ifelse.y
lex if.l
yacc ifelse.y
gcc y.tab.c
./a.out
vim ifelse.y
lex if.l
yacc ifelse.y
gcc y.tab.c
./a.out
vim ifelse.y
lex if.l
yacc ifelse.y
gcc y.tab.c
./a.out
vim ifelse.y
vim if
./a.out < if
vim if
./a.out < if
vim ifelse.y
lex if.l
yacc ifelse.y
gcc y.tab.c
./a.out < if
vim if
./a.out < if
vim if
./a.out < if
vim if
./a.out < if
vim ifelse.y
lex if.l
yacc ifelse.y
gcc y.tab.c
./a.out < if
vim if
vim ifelse.y
lex if.l
yacc ifelse.y
gcc y.tab.c
./a.out , if
./a.out < if
vim ifelse.y
lex if.l
yacc ifelse.y
gcc y.tab.c
./a.out < if
vim ifelse.y
vim if
lex if.l
gcc y.tab.c
yacc ifelse.y
./a.out < if
vim if
./a.out < if
vim if
./a.out < if
vim if
ls
vim switch.l
vim ifelse.y
ls
lex for.l
yacc for.y
gcc y.tab.c
cat for
./a.out<for
vim for
./a.out<for
vim for.y
lex for.l
yacc for.y
gcc y.tab.c
./a.out < for
vim switch.l
vim ifelse.y
vim switch.l
vim switch.y
vim switch1.y
vim switch
lex switch.l
yacc switch.y
vim switch.y
yacc switch1.y
vim switch.y
vim switch1.y
lex switch.l
yacc switch1.y
gcc yy.tab.c
gcc y.tab.c
vim switch1.y
lex switch.l
yacc switch1.y
gcc y.tab.c
./a.out < switch
vim while.l
vim if1
ls
cd yacc
ls
lex switch.l
lex switch1.y
clear
lex switch1.l
lex switch.l
yacc switch.y
ls
lex ifelse.l
cd yacc
ls
vi if
ls
cd yacc/
ls
pwd
ls
cd yacc
ls
vi for.l
vi for.y
vi for.l
yacc -d for.y
lex for.l
gcc y.tab.c lex.yy.c -ll
cd yacc/
ls
cd infix3ac/
ls
cd ..
vi ifelse.l
ls
vi ifelse.y
yacc -d ifelse.y
lex ifelse.l
vi ifelse.l
ls
vi if.l
ls
vi while.l
vi while.y
ls
vi switch.l
vi switch.y
yacc -d switch.y
lex switch.l
gcc y.tab.c
ls
vi switch1.y 
cd yacc
vi for
vi while
vi switch
vi if
ls
cd yacc
ls
cd infix3ac
ls
vi lex.l
ls
cd..
cd~
cd
cd yacc
ls
cd yacc
ls
vi postfix.y 
ls
vi calc.l
ls
cd yacc/
ls
vi while.l
vi while.y
vi while.l
vi while
ls
cd yacc
ls
cd infix3ac
ls
cd yacc
ls
cd infix3ac/
ls
vi lex.l
ls
vi ylex.y 
ls
vi a.out
ls
cd yacc
ls
cd infix3ac
ls
vi lex.l
ls
vi ylex.y
ls
lex lex.l
yacc -d ylex.y
lex lex.l
gcc y.tab.c lex.yy.c
./a.out
yacc -d ylex.y
./a.out
lex lex.l
vi lex.l
vi ylex.y
vi lex.l
ls
cd yacc
ls
vim switch1.y
mkdir infix3ac
cd infix3ac/
vim lex.l
ls
vim ylex.y
ls
lex lex.l
yacc ylex.y
gcc yy.lex.c
ls
gcc lex.yy.c
vim lex.l
lex lex.l
yacc ylex.y
gcc lex.yy.c
vim lex.l
yacc ylex.y
lex lex.l
gcc lex.yy.c
vim ylex.y 
yacc ylex.y
lex lex.l
gcc lex.yy.c
yacc -d ylex.y
lex lex.l
gcc lex.yy.c
gcc lex.yy.c y.tab.c
vim ylex.y 
gcc lex.yy.c y.tab.c
lex lex.l
yacc -d ylex.y
lex lex.l
gcc lex.yy.c y.tab.c
./aout
./a.out
vim ylex.y 
yacc -d ylex.y
lex lex.l
gcc lex.yy.c y.tab.c
vim ylex.y 
lex lex.l
yacc -d ylex.y
lex lex.l
gcc lex.yy.c y.tab.c
./a.out
vim ylex.y 
yacc -d ylex.y
vim ylex.y 
lex lex.l
gcc lex.yy.c y.tab.c
./a.out
vim ylex.y 
lex lex.l
yacc -d ylex.y
lex lex.l
gcc lex.yy.c y.tab.c
./a.out
vim ylex.y 
yacc -d ylex.y
lex lex.l
gcc lex.yy.c y.tab.c
./a.out
vim ylex.y 
./a.out
vim ylex.y 
./a.out
vim ylex.y 
yacc -d ylex.y
lex lex.l
gcc lex.yy.c y.tab.c
./a.out
vim lex.l
lex lex.l
yacc -d ylex.y
lex lex.l
gcc lex.yy.c y.tab.c
./a.out 
vi ylex.y 
vim lex.l
vi ylex.y 
./a.out 
vi ylex.y 
yacc -d ylex.y
lex lex.l
gcc lex.yy.c y.tab.c
./a.out
vi ylex.y 
yacc -d ylex.y
lex lex.l
gcc lex.yy.c y.tab.c
./a.out
vi ylex.y 
