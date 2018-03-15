#include<stdio.h>
int main()
{

int number,i,count=0;
printf("enter the number");
scanf("%d",&number);
for(i=2;i<number/2;i+=2)
{
if(i*i==number)
{
  printf("yes");
  count=0;
  break;
}
else
{
  count+=1;
}
}
if(count!=0)
{
  printf("number is not power of 2");
}return 0;
}
