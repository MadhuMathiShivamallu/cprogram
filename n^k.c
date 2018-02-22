#include<stdio.h>
int main()
{
int mul=1,base,expo;
printf("enter the base");
scanf("%d",&base);
printf("enter the exponum");
scanf("%d",&expo);
while(expo!=0)
{
mul*=base;
expo--;
}
printf("the power of given number is %d",mul);
return 0;
}
