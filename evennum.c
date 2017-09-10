#include<stdio.h>
int main()
{
int range1,range2,i;
printf("enter the even number of ranges");
scanf("%d%d",&range1,&range2);
for(i=range1;i<=range2;i+=1)
{
if(i%2==0)
{
printf("%d",i);
}
}
return 0;
}
