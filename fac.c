#include<stdio.h>
int main()
{
int number,f1=1;
printf("enter the number ");
scanf("%d",&number);
while(number!=0)
{
f1=f1*number;
number--;
}
printf("the factorial is %d\n",f1);
return 0;
}
