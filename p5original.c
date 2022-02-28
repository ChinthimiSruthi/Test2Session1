#include <stdio.h>
int input_array_size()
{
  int a;
  printf("Enter the size of array\n");
  scanf("%d",&a);
  return a;
}
void input_array(int n, int a[n]
{
  int i;
  printf("Enter a number\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void erotosthenes_sieve(int n, int a[n])
{
  int i,j,flag=0;
  for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
        {
          if(i%j==0)
          {
            flag++;
          }
        }
    }
}