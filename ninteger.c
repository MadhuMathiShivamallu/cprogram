#include<stdio.h>
int main()
{
int number,countnumber=0;
printf("enter the number");
scanf("%d",&number);
while(number!=0)
{
number=number/10;
countnumber++;
}
printf(" the total is %d",countnumber);
return 0;
}
