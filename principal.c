#include<stdio.h>
int main()
{
    float p,n,r,si;
    scanf("%f\t%f\t%f",&p,&n,&r);
    si=(p*n*r)/100;
    printf("the simple interest %2.f",floor(si));
    return 0;
}
