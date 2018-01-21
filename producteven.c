#include<stdio.h>
int main()
{
int number1,number2,product;
printf("enter two number");
scanf("%d\t%d",&number1,&number2);
product=number1*number2;
if(product%2==0)
{
    printf("even");
}
else
{
    printf("odd");
}
return 0;
}
