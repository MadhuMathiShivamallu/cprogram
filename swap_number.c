#include<stdio.h>
int main()
{
int swapnum1,swapnum2;
printf("enter the two number");
scanf("%d\t%d",&swapnum1,&swapnum2);
swapnum1+=swapnum2;
swapnum2=swapnum1-swapnum2;
swapnum1-=swapnum2;
printf("%d\t%d",swapnum1,swapnum2);
return 0;
}
