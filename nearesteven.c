#include<stdio.h>
int main()
{
int number;
printf("enter the number");
scanf("%d",&number);
if(number%2==0)
{
    printf("%d",number-2);
}
else
{
    printf("%d",number-1);
}
return 0;
}
