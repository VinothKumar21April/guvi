#include<stdio.h>
int main()
{
  int arr[50],i,j,k,temp;
  printf("Enter the height of the students");
  for(i=0;i<50;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<50;i++)
  {
    for(j=i+1;j<50;j++)
    {
      if(arr[i]<arr[j])
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      } 
    }
  }
  printf("The 4th tallest person is %d",arr[3]);
  printf("Enter k value");
  scanf("%d",&k);
  printf("The Kth tallest person is %d",arr[k-1]);
  return 0;
}
  
