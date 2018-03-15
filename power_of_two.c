#include<stdio.h>
int main()
{
int number,i,count,mul=1,n;
printf("enter the number");
scanf("%d",&number);
n=number;
while(number!=0)
{
  mul=mul*2;
  if(mul==n)
  {count=0;
    printf("yes");
    break;
  }
  else
  {
    number--;
    count++;
  }}
  if(count!=0)
  {
    printf("no");
  }
return 0;
}

