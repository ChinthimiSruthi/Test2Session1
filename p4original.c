#include <stdio.h>
int input()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
int find_fibo(int n)
{
  int i,a=0,b=1,c=0;
  for(i=2;i<n;i++)
    {
      c=a+b;
      a=b;
      b=c;
    }
}
void output(int n, int fibo)
{
  int c;
  printf("%d\n",c);
}
int main()
{
  int n=input();
  find_fibo(n);
  int fibo;
  output(n,fibo);
  return 0;
}