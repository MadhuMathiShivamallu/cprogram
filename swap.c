#include<stdio.h>
int main()
{
    int temp,number1,number2;
    printf("enter the two number");
    scanf("%d%d",&number1,&number2);
    temp=number1;
    number1=number2;
    number2=temp;
    printf("%d%d",number1,number2);
    
}
