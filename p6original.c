#include <stdio.h>
#include <string.h>
void input_string(char *a)
{
  printf("Enter a string\n");
  scanf("%s",a);
}
int str_reverse(char *string, char *substring)
{
  int i,j,k,l;
  l=strlen(substring);
  for(i=0;string[i+l-1];i++)
    {
      k=i;
      for(j=0;i<=l-1;j++)
        if(string[k]!=substring[j])
          break;
    }
  if(j==1)
  {
    return i;
  }
  return -1;
}
void output(char *string, char *substring, int index)
{
  index=str_reverse(string,substring);
  if(index==-1)
  {
    printf("The index of %s in %s is %d\n",string,substring,index);
  }
  else
  {
    printf("substring not found\n");
  }
}
int main()
{
  char a[50],string,substring;
  input_string(a);
  str_reverse(&string,&substring);
  int index;
  output(&string,&substring,index);
  return 0;
}