#include<stdio.h>
int main()
{
  int arr[10],i,n,r=0;
  printf("Enter how many numbers");
  scanf("%d",&n);
  printf("Enter the numbers");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
    if(arr[i]==arr[j])
    {
      printf(("%d",arr[j]);
      r=1;
    }
   }
  }
  if(r==0)
  {
    printf("nothing");    
  }
  return 0;
}
