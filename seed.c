#include<stdio.h>
int main()
{
  int i,j,n,temp,k,count=0;
  printf("Enter a number");
  scanf("%d",&n);
  temp=1;
  while(temp<n)
  {
    k=0;
    j=temp;
    while(j>0)
    {
    arr[k]=j%10;
    j=j/10;
    k++;
    val*=arr[k];
    }
    if(arr[k]*j==n)
    {
      printf("%d",temp);
      count=1;
    }
    temp++;
  }
  if(count==0)
  {
    printf("No seed for that number");
  }
  return 0;
} 
