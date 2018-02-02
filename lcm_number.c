#include<stdio.h>
int main()
{
    int num1,num2,value;
    printf("enter numbers");
    scanf("%d%d",&num1,&num2);
    value=(num1>num2)?num1:num2;
    while(value>0)
    {
        if((value%num1==0) && (value%num2==0))
        {
            printf("%d",value);
            break;
        }
    }
return 0;
    }
