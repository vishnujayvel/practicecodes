#include<stdio.h>

#define func(a)	{\
		printf("Welcome");\
		a+1;\
		}


int main()
{
printf("%d",func(5));
}
