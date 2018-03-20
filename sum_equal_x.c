#include<stdio.h>
int main()
{
  int array[40],n,i,x,sum=0;
  printf("enter the number of elemnts and x");
scanf("%d\t%d",&n,&x);
printf("enter the elemnts");
for(i=0;i<n;i++)
{
  scanf("%d",&array[i]);
  sum+=array[i];
}
if(x==sum)
{
  printf("yes");
}
else
{
  printf("no");
}
return 0;
}
