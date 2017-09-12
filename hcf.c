#include<stdio.h>
void hcf(int ,int);
int main()
{
int number1,number2;
printf("enter the two  number");
scanf("%d%d",&number1,&number2);
hcf(number1,number2);
return 0;
}
void hcf(int a,int b)
{
int m=a;
int n=b;
while(m!=n)
{
if(m>n)
{
m=m-n;
}
else
{
n=n-m;
}
}
printf("the hcf of two number is %d",m);
}
