#include<stdio.h>
int main()
{
  int a1[10],a2[10],n1,n2,i,j,count=0;
  printf("Enter number of values in array a1");
  scanf("%d",&n1);
  printf("Enter number of values in array a2");
  scanf("%d",&n2);
  printf("Enter the values for a1");
  for(i=0;i<n1;i++)
  {
    scanf("%d",&a1[i]);
  }
  printf("Enter the values for a2");
  for(i=0;i<n1;i++)
  {
    scanf("%d",&a1[i]);
  }
  for(i=0;i<n1;i++)
  {
    for(j=0;j<n2;j++)
    {
      if(a1[i]!=a2[j])
      {
      }
      else
      {
      break;
      count++;
      }
    }
  }
  if(count==n2)
  {
    printf("a1 is a subset of a2");
  }
  else
  {
    printf("a1 is not a subset of a2");
  }
  return 0;
}
  
  
