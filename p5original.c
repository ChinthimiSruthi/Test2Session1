#include <stdio.h>
#include <math.h>
int input_array_size()
{
  int n;
  printf("Enter the size of an array\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  for(int i=1;i<n;i++)
    {
      a[i]=i+1;
    }
}
void erotosthenes_sieve(int n, int a[n])
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=2;j<a[i];j++)

      {
        if(a[i]%j==0)
        {
          a[i]=0;
        break;
        }
      }
  }
}
void out_put(int n, int a[n])
{
  for(int i=1;i<n;i++)
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