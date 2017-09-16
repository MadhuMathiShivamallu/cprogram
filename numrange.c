#include<stdio.h>
int main()
{
int a[10],number,i,c=0;
printf("enter the number only 1 to 9");
for(i=1;i<10;i++)
{
    scanf("%d",&a[i]);
    
}
printf("enter any number");
scanf("%d",&number);
for(i=1;i<10;i++)
{
    if(number==a[i])
    {
c++;    
break;
    }}
    if(c==0)
    {
        printf("the entered number is out of range ");
    }
return 0;
}
