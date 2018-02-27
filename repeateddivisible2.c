#include<stdio.h>
void main()
{
  int num1,num2;
  printf("enter two numbers");
  scanf("%d\t%d",&num1,&num2);
while((num1%2)==0)
{
  num1/=2;

  }printf("%d\t",num1);
  while((num2%2)==0)
  {
    num2/=2;
  }printf("%d",num2);
}
