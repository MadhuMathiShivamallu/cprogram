#include<stdio.h>
int main()
{
int mul=1,basenum,exponum;
printf("enter the base");
scanf("%d",&basenum);
printf("enter the exponum");
scanf("%d",&exponum);
while(exponum!=0)
{
mul*=basenum;
exponum--;
}
printf("the power of given number is %d",mul);
return 0;
}
