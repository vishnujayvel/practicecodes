#include<stdio.h>
#include<string.h>
long long f[10001];
  
int long long fib(int n)
{ if(f[n]!=-1)
    return f[n];
  int i;

  f[0] = 0;
  f[1] = 1;

  for (i = 2; i <= n; i++)
  {
      f[i] = f[i-1] + f[i-2];
  }

  return f[n];
}

int main ()
{
  int n;
  int t;
  scanf("%d",&t);
  memset(f,-1,sizeof(f));
  while(t--){
  scanf("%d",&n);
  printf("%lld", fib(n+1));
  }
  return 0;
}
