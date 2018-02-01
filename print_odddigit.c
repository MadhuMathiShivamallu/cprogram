#include<stdio.h>
int main()
{
  int number,i,rev=0,sep,r;
  printf("enter the number");
  scanf("%d",&number);
  while(number!=0)
  {
    sep=number%10;
    rev=rev*10+sep;
    number/=10;
  }
  while(rev!=0)
  {
    r=rev%10;
  if(r%2!=0)
    {
      printf("%d ",r);
    }
    rev/=10;
  }
  return 0;
}
