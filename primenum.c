#include<stdio.h>
int main()
{
int number,i,count=0;
printf("enter the number");
scanf("%d",&number);
for(i=2;i<=number/2;i++)
{
if(number%i==0)
{
count=1;
break;
}}
if(count==0)
{
printf("the given number is prime");
}
else
{
printf("the given number is not prime");
}
return 0;
}
