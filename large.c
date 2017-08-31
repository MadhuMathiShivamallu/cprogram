#include<stdio.h.
int main()
{
int num1,num2,num3;
printf("enter the three number");
scanf("%d\t%d\t%d",&num1,&num2,&num3);
if((num1>num2)&&(num1>num3))
{
printf("number %d is largest",num1);
}
elseif((num2>num1)&&(num2>num3))
{
printf("number %d is largest",num2);
}
else
{
printf("number %d is largest");
}
return 0;
}
