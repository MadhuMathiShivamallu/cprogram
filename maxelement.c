#include<stdio.h>
int main()
{
int array[10];
int i,j,n;
printf("enter the no.of elememts");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{if (array[i]>array[j])
{
int t=array[i];
array[i]=array[j];
array[j]=t;
}}
}
printf("the minimum of the elements is %d",array[0]);
return 0;
}
