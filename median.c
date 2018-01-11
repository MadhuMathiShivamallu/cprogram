#include<stdio.h>
int main()
{
    int array[30],i,j,number;
    printf("enter the number of elements");
    scanf("%d",&number);
    for(i=0;i<number;i++)
    {
        scanf("%d",&array[i]);
        
    }
for(i=0;i<number-1;i++)
{
    for(j=i+1;j<number;j++)
    {
        if(array[i]>array[j])
        {
            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
}
i=((number+1)/2)-1;
printf("the median element is %d",array[i]);
}
