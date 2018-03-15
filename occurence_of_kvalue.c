#include<stdio.h>
int main()
{

int number,n,count=0,k;
printf("enter the number and k value");
scanf("%d\t%d",&number,&k);
while(number!=0)
{
  n=number%10;
  if(n==k)
  {
    count++;
  }
  number/=10;
}
printf("%d",count);
return 0;}
