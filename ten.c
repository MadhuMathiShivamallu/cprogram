#include<stdio.h>
int main()
{
    int a[10],max,i;
printf("enter the ten number");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
    
}
max=a[0];
for(i=1;i<10;i++)
{
    if(max<a[i])
    {
        max=a[i];
        
    }
}
printf("the largest number is %d ",max);
    
return 0;
}
