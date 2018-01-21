#include<stdio.h>
int main()
{
    int fibnum1,fibnum2,temp;
    int i,n;
    fibnum1=0,fibnum2=1;
    printf("enter the number of series");
    scanf("%d",&n);
    printf("%d\n%d\n",fibnum1,fibnum2);
    for(i=2;i<=n;i++)
    {
        temp=fibnum1+fibnum2;
        printf("%d\n",temp);
    fibnum1=fibnum2;
        fibnum2=temp;
    }
}
