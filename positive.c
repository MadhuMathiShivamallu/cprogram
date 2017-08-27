#include<stdio.h>
#include<conio.h>
void main()
{
int number;
clrscr();
printf("enter the number");
scanf("%d",&number);
if(number>0)
{
printf("the number is positive");
}
elseif(number<0)
{
printf("the number is negative");
}
else
{
printf("the number is equal to zero");
}getch();
}
