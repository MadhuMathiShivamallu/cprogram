#include<stdio.h>
int main()
{
int  num,two=2;
printf("enter the number");
scanf("%d",&num);
while(two<num)
{
    two=two*2;
    if(two==num)
{    
    printf("yes");
    
}
}
return 0;
    }
