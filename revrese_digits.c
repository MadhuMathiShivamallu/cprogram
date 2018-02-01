#include<stdio.h>
int main()
{
    int number,modulo,reverse=0;
    printf("enter number");
    scanf("%d",&number);
    while(number!=0)
    {
        modulo=number%10;
        reverse=reverse*10+modulo;
        number/=10;
    }
printf("%d",reverse);
return 0;
}
