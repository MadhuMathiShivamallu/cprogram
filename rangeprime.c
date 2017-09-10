#include<stdio.h>
int main()
{
int number1,number2,i,j,count=0;
printf("enter the starting range and ending range");
scanf("%d%d",&number1,&number2);
printf("the prime number are");
for(i=number1;i<number2;++i)
{count=0;
for(j=2;j<=i/2;++j)
{
if(i%j==0)
{
count=1;
break;
}
}
if(count==0)
{
printf("%d",i);
}
}
return 0;
}
