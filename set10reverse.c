#include<stdio.h>
int main()
{
  int number,num,rev=0;
  printf("enter number");
  scanf("%d",&number);
  while(number!=0)
  {
    num=number%10;
    rev=rev*10+num;
    number/=10;
  }
  printf("%d",rev);
  return 0;
}
