#include<stdio.h>
int main()
{
int number,fact=1;
printf("enter the number");
scanf("%d",&number);
while(number!=0)
{
  fact*=number;
  number--;
}
printf("%d",fact);
return 0;
}
