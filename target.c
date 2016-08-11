#include<stdio.h>
int main()
{
  int arr[10],n,m,r=0;
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
        r=1;
      }
    }
   }
   if(r==0)
   {
     printf("No two numbers will be added to give the target sum");
   }
   }
   return 0;
}
