#include<stdio.h>
int main()
{
int   number,num,num2,re=0;
printf("enter the  number ");
scanf("%d",&number);
num=number;
while(num!=0)
{
num2=num%10;
re=re+num2*num2*num2;
num=num/10;
}
if(number==re)
{
printf("the given number is armstrong");
}
else
{
    printf("the given number is not armstrong");
}
return 0;
}



