#include<stdio.h>
int main()
{
  int arr[10],i,n,j,temp;
  printf("Enter a number");
  scanf("%d",&n);
  if(n==1)
  {
    printf("The given number is minimum");
  }
  i=0;
  while(n>0)
  {
    arr[i]=n%10;
    n=n/10;
    i++;
  }
  printf("Enter k value");
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  printf("The output is");
  for(i=0;i<k;i++)
  {
    printf("%d",arr[i]);
  }
  return 0;
}
