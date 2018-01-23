#include<stdio.h>
int main()
{
    int number1,number2,difference;
    printf("enter the two number");
    scanf("%d\t%d",&number1,&number2);
    difference=number1-number2;
    if(difference%2!=0)
    {
        printf("ODD");
    }
else
{
    printf("EVEN");
}
    return 0;
}
