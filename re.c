#include <stdio.h>
int main()
{
int number,temp,result=0;
printf("enter the number");
scanf("%d",&number);
while(number!=0)
{
    temp=number%10;
    result=result*10+temp;
    number=number/10;
}
printf("the reversed number is %d",result);
}
