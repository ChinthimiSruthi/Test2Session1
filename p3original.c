#include<stdio.h>
int input_number()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  int i,flag=0;
  if(n==0 || n==1)
  {
    flag=1;
  }
  for(i=2;i<=n/2;++i)
    {
    if(n%i==0)
      flag=1;
      break;
    }
}
void output(int n,int is_prime)
{
  if(is_prime)
  {
    printf("%d is a prime number\n",n);
  }
  else
  {
    printf("The number is not prime\n");
  }
}
int main()
{
 int n=input_number();
 int prime= is_prime(n);
 output(n,prime);
 return 0;
}