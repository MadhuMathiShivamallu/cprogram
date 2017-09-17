#include<stdio.h>
int main()
{
    int array[10];
    int i,j,t;
    printf("enter the number");
    for(i=0;i<5;i++)
{
    scanf("%d",&array[i]);
}
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(array[i]>array[j])
            {
                t=array[i];
                array[i]=array[j];
                array[j]=t;
            }
        }
    }
    
    printf("the largest numberis %d",array[4]);
    printf("the smallest number is %d",array[0]);
    return 0;
}
