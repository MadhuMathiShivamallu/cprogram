#include<stdio.h>
int main()
{
  int number,i,count=0;
  printf("enter the number");
  scanf("%d",&number);
  for(i=1;i<=number;i++)
  {
    if(number%i==0)
    {
      if(i%2!=0)
      {
        printf("%d ",i);
      }
      else
      {
        count=1;
      }}
      else
      {
        continue;
      }
    }return 0;
  }

