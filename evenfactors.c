#include<stdio.h>
int main()
{

int number,i;
printf("enter the number");
scanf("%d",&number);
for(i=1;i<=number;i++)
{
  if(number%i==0)
  {
    if(i%2==0)
    {
      printf("%d\t",i);
      }
      else
      {
        continue;
      }
  }
  else
  {
    continue;
  }}return 0;
}
