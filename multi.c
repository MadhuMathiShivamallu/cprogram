#include<stdio.h>
int main()
{
int number,i,range,num;
printf("enter the number for multiplication table and ending range");
scanf("%d%d",&number,&range);
printf("the value are");
for(i=1;i<=range;i++)
{
num=number*i;
printf("%d\n",num);

}
return 0;
}









