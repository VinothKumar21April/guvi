#include<stdio.h>
int main()
{
  int arr[10],n,m;
  printf("Enter how many numbers");
  scanf("%d",&n);
  printf("Enter the numbers");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Enter the target number");
  scanf("%d",&m);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(arr[i]+arr[j]==m)
      {
        printf("The two numbers are:%d,%d",arr[i],arr[j]);
      }
    }
   }
   return 0;
}
