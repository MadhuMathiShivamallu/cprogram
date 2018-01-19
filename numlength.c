#include<stdio.h>
int main()
{
    int number=0,digits;
    printf("enter the digits");
    scanf("%d",&digits);
    while(digits!=0)
    {
        digits=digits/10;
        number++;
    }
printf("%d",number);
return 0;
}
