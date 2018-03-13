
#include<stdio.h>
int main()
{
  int number,count=0,i,j;
  printf("enter number");
  scanf("%d",&number);
  for(i=2;i<=number/2;++i)
  {count=0;
    if(number%i==0)
    {
      for(j=2;j<=number/2;j++)
      {
        if((i%j==0)&&(i!=j)){
count=1;
break;
}
}
if(count==0)
{
printf("%d",i);
}
}
      }
    return 0;}
