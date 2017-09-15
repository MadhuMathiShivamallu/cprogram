#include<stdio.h>
int main()
{
    int i,range,sum=0;
    printf("enter the number to calculate sum");
    scanf("%d",&range);
    for(i=0;i<=range;i++)
    {
        sum+=i;
        
    }
    printf("%d",sum);
    return 0;
}
