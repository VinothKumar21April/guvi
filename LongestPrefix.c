#include<stdio.h>
#include<string.h>
int main()
{
  char str[10][20],minstr[20];
  int i,n,l=20,len;
  printf("Happy World");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%s",&str[i]);
  }
  for(i=0;i<n;i++)
  {
    len=strlen(str[i]);
    if(len<l)
    {
      l=len;
      minstr[i]=str[i];
    }
  }
  printf("%s",minstr);
  return 0;
}
