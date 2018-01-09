#include<stdio.h>
int main()
{
int arraylist[10];
int i,j,n;
printf("enter the no.of elememts");
scanf("%d",&n);
printf("enter the array list");
for(i=0;i<n;i++)
{
scanf("%d",&arraylist[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{if (arraylist[i]<arraylist[j])
{
int t=arraylist[i];
arraylist[i]=arraylist[j];
arraylist[j]=t;
}}
}
printf("the maximum of the elements is %d",arraylist[0]);
return 0;
}


