#include<stdio.h>
int main()
{
int a[10],i,sum=0;
float avg;
printf("enter the elements");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
    
}

for(i=0;i<10;i++)
{
    sum+=a[i];
}
avg=sum/9;
printf("the average is %f",avg);
return 0;
}
