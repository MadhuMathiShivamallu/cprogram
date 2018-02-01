#include<stdio.h>
#include<math.h>
int main()
{
  int num1,num2,product,count=0,i;
  printf("enter two number");
  scanf("%d%d",&num1,&num2);
  product=num1*num2;
  for(i=0;i<=product;i++)
{  
if(product==i*i)
  {
count=1;
  }
}
 if(count==1)
 {
   printf("yes");
 }
 else
 {
   printf("no");
 }
 return 0;
}
