#include<stdio.h>
int main()
{
int sum=0,number,i;
printf("enter the number");
scanf("%d",&number);
for(i=0;i<=number;i++)
{
sum+=i;
}
printf("the sum is %d",sum);
return 0;
}
