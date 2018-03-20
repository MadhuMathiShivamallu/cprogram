#include<stdio.h>
int main()
{
  int array[40],n,i,count=0;
  printf("enter the number of elemnts");
scanf("%d",&n);
printf("enter the elemnts");
for(i=0;i<n;i++)
{
  scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
  if(array[i]<n)
  {
    printf("%d\t",array[i]);
    count=1;
  }
}
if(count==0)
{
  printf("no elements");
}
return 0;
}
