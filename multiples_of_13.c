#include<stdio.h>
int main()
{
  int number;
  printf("enter number");
  scanf("%d",&number);
  if(number%13==0)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  return 0;
}
