#include<stdio.h>
int main()
{
  int n,digits,sum=0;
  printf("enter the number");
  scanf("%d",&n);
  while(n!=0)
  { 
  digits=n%10;
  sum+=digits*digits;
  n/=10;
  }
    printf("%d",sum);
    return 0;
}
