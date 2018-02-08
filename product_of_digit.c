#include<stdio.h>
int main()
{
  int number,product=1,num;
  printf("enter number");
  scanf("%d",&number);
  while(number!=0)
  {
    num=number%10;
    product*=num;
    number/=10;
  }
  printf("%d",product);
  return 0;
}
