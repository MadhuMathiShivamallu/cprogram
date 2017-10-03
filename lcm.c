#include<stdio.h>
int main()
{
    int number1,number2,min;
    printf("enter the two numbers");
    scanf("%d%d",&number1,&number2);
    min=(number1>number2)? number1:number2;
    while(1)
    {
        if((min%number1==0)&&(min%number2==0))
        {
            printf("the lcm of two number is %d",min);
            break;
            
        }
    }
   return 0;
   
}
