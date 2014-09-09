#include<stdio.h>
int main()
{
	int a[5];
	a[1]=1;
	a[0]=0;
	a[-1]=-1;
	printf("%d %d %d",a[1], a[0], a[-1]);
	return 0;
}
