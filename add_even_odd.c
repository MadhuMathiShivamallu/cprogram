#include<stdio.h>
int main()
{
    int number1,number2,sum;
    printf("enter the two number");
    scanf("%d\t%d",&number1,&number2);
    sum=number1+number2;
    if(sum%2!=0)
    {
        printf("ODD");
    }
else
{
    printf("EVEN");
}
    return 0;
}
