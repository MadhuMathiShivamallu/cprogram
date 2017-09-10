#include<stdio.h>
int main()
{
int number,number1,number2,i,re=0,num;
printf("enter the staring range and ending range");
scanf("%d%d",&number1,&number2);
printf("the armstrong number are");
for(i=number1;i<=number2;i++)
{number=i;
num=0;
while(number!=0)
{
num=number%10;
re=re+num*num*num;
number=number/10;
}
if(i==re)
{
printf("%d\n",i);
}
re=0;
}
return 0;
}









