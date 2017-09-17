#include<stdio.h>
int main()
{
    int number,mul;
    printf("enter the number for table");
    scanf("%d",&number);
    for(int i=1;i<=10;i++)
    {
    mul=number;    
    mul*=i;
    printf("%d\n",mul);
    }

    return 0;
}
