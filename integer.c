#include<stdio.h>
int main()
{
  int arr[10],n;
  printf("Enter number of values");
  scanf("%d",&n);
  printf("Enter array values");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    if(arr[i]==i)
    {
       printf("%d",i);
    }
  }
  return 0;
}
