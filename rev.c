#include<stdio.h>
int main()
{
int number,temp,reverse=0;
printf("enter the number for reversing");
scanf("%d",&number);
while(number!=0)
{
temp=number%10;
reverse=reverse*10+temp;
number=number/10;
}
printf("the reversed number is %d",reverse);
return 0;
}
