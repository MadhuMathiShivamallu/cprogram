#include<stdio.h>
int main()
{
int array[10];
int i,j,num;
printf("enter the no.of elememts");
scanf("%d",&num);
printf("enter the array elements");
for(i=0;i<num;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<num-1;i++)
{
for(j=i+1;j<num;j++)
{if (array[i]>array[j])
{
int t=array[i];
array[i]=array[j];
array[j]=t;
}}
}
printf("the miniimum of the elements is %d",array[0]);
return 0;
}
