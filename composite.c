#include<stdio.h>
int main()
{
  int number,i,count=0;
  printf("enter the number");
  scanf("%d",&number);
  for(i=2;i<number/2;i++)
  {
    if(number%2==0)
    {
      count++;
    }
  }
  if(count>0)
  {
    printf("the number is composite %d",number);
  }
  else
  {
    printf("the number is not composite %d",number);
  }
}
