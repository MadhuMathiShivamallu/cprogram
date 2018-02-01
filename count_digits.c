#include<stdio.h>
int main()
{
  int number,count=0;
  printf("enter number");
  scanf("%d",&number);
  while(number!=0)
  {
    count++;
    number/=10;
  }
  printf("%d",count);
  return 0;
}
