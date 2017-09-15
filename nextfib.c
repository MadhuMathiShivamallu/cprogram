#include<stdio.h>
int main()
{
    int num1,num2,temp;
    int i,lastvalue;
    num1=0,num2=1;
    printf("enter the range of series");
    scanf("%d",&lastvalue);
    printf("%d\n%d\n",num1,num2);
    for(i=2;i<=lastvalue;i++)
    {
        temp=num1+num2;
        printf("%d\n",temp);
    num1=num2;
        num2=temp;
    }
}
