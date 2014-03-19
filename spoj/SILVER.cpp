#include<stdio.h>
#include<math.h>
main()
{ double a ,b;
r:
scanf("%lf",&a);
if(a!=0){
b=(log(a))/log(2);
printf("%0.lf\n",floor(b));
      
goto r;      }}
