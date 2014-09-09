%{
        int pos=0, neg=0, posf=0, negf=0;
%}

%%

[-][0-9]+       neg++;
[-][0-9]*"."[0-9]+      negf++;
[+]?[0-9]+      pos++;
[+]?[0-9]*"."[0-9]+     posf++;

%%

main()
{
        yylex();
        printf("Positive numbers: %d\n",pos);
        printf("Negative numbers: %d\n",neg);
        printf("Positive fractions: %d\n",posf);
        printf("Negative fractions: %d\n",negf);
}

