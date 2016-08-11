#include<stdio.h>
int main()
{
  int arr[10],i,n;
  printf("Enter number of elements);
  scanf("%d",&n);
  printf("Enter the elements");
  for(i=0;i<n;i++)
  {
     scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
    if(arr[j]!=0)
    {
    if(arr[i]==arr[j])
    {
      arr[j]=0;    
    }
    }
   }
  }
  for(i=0;i<n;i++)
  {
    if(arr[j]!=0)
    {
       printf("%d",arr[j]);
    }
    else
    {
       printf("nothing unique");
    }
  }
  return 0;
}
