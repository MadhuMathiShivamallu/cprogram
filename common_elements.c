#include<stdio.h>
int main()
{
  int array[40],n,array2[40],i,count=0;
  printf("enter the number of elemnts");
scanf("%d",&n);
printf("enter the elemnts for A");
for(i=0;i<n;i++)
{
  scanf("%d",&array[i]);
}printf("\nenter the elemnts for b");
for(i=0;i<n;i++)
{
  scanf("%d",&array2[i]);
}
for(i=0;i<n;i++)
{
  if(array2[i]==array[i])
  {
    printf("\n%d",array[i]);
  }
}
return 0;
}
