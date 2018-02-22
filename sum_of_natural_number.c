#include<stdio.h>
int main()
{
    int number,i,sum;
    printf("last number");
    scanf("%d",&number);
    for(i=0;i<=number;i++)
    {
        sum+=i;
        
    }printf("%d",sum);
    return 0;
}
