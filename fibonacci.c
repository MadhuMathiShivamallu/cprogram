#include <stdio.h>
int main()
{
    int number,temp,f1=0,f2=1,i;
    printf("enter the range ");
    scanf("%d",&number);
    printf("the fibonacci number are");
    printf("%d\n",f1);
    for(i=2;i<=number;i++)
    {
        temp=f1+f2;
        printf("%d\n",temp);
        f1=f2;
        f2=temp;
        
    }
    return 0;
}
    




