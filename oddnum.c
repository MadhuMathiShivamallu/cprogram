#include<stdio.h>
int main()
{
int i,range1,range2;
printf("enter the odd numberranges");
scanf("%d%d",&range1,&range2);
printf("the number are");
if(range1%2!=0)
{
for(i=range1;i<=range2;i=i+2)
{
printf("%d",i);
}}
else
{
    printf("the starting rande is not odd number ");
}

return 0;
}


