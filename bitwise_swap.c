#include<stdio.h>
int main()
{
    int number1,number2;
    printf("enter the number");
    scanf("%d\t%d",&number1,&number2);
    number1^=number2;
    number2=number1^number2;
    number1^=number2;
    printf("%d\t%d",number1,number2);
    return 0;
}
