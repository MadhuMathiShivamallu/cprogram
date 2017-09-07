#include<stdio.h>
int main()
{
int number,num,number2,reverse=0;
printf("enter the number");
scanf("%d",&number);
number2=number;
while(number!=0)
{
num=number%10;
reverse=reverse*10+num;
number=number/10;
}
if(reverse==number2)
{
printf("the given number is palindrome");
}
else
{
printf("the given number is not palindrome");
}
return 0;
}
