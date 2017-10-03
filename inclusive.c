#include<stdio.h>
int main()
{
    int sum=0,i,j;
    for(i=1;i<=15;i++)
    {
        sum+=i;
    }
    printf("the sum of 1 to 15 inclusive is %d\n",sum);
sum=0;
    for(j=15;j<=45;j+=2)
    {
        sum+=j;
    }
printf("the sum of  odd number 15 to 45 inclusive is %d",sum);
    return 0;
}

