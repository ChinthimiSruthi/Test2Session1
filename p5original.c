#include <stdio.h>
#include <math.h>
int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}

void input_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    a[i] = i;
  a[1]=0;
}

void erotosthenes_sieve(int n, int a[n])
{
  int i=1,j,count;
  while(i<=n)
  {
   count=0;
    i=n;
    while(j<=i/2)
      {
        if(i%j==0)
        {
          count++;
        break;
        }
        j++;
      }
    if(count==0 && i!=n)
    {
      printf("%d\n",i);
    }
    i++;
  }
}

void out_put(int n, int a[n])
{
  for(int i=0;i<n;i++)
    if(a[i]!=0)
      printf("%d ",a[i]);
  printf("\n");
}

int main()
{
  int n;
  n=input();
  int a[n];
  input_array(n,a);
  erotosthenes_sieve(n,a);
  out_put(n,a);
  return 0;
}