#include<stdio.h>
int main()
{
  int array[40],n,i,k;
  printf("enter the number of elemnts and k ");
scanf("%d\t%d",&n,&k);
printf("enter the elemnts");
for(i=0;i<n;i++)
{
  scanf("%d",&array[i]);
}n-=k;
for(i=0;i<n;i++)
{
  printf("%d",array[i]);
}return 0;
}
