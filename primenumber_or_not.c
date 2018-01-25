#include<stdio.h>
int main()
{
    int number,count=0,i;
    printf("enter the number");
    scanf("%d",&number);
    for(i=2;i<=number/2;++i)
    {
    if(number%i==0)
    {
        count++;
        break;
    }
}printf("%d",count);
if(count==0)
{
    printf("prime number");
    
}
else
{
    printf("not a prime number");
}
return 0;
}
