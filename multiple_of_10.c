#include<stdio.h>
int main()
{
    int number,n;
    printf("enter the number");
    scanf("%d",&number);
    while(number%10!=0)
    {
        number++;
    }
printf("\nnearest greater multiple of 10 %d",number);
return 0;
    }
