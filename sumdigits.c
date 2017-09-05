#include<stdio.h>
int main()
{
int number,num,sum=0;
printf("enter the number");
scanf("%d",&number);
while(number!=0)
{
num=number%10;
sum+=num;
number=number/10;
}
printf("the sum of digits is %d",sum);
return 0;
}
