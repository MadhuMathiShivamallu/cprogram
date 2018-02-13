#include<stdio.h>
int main()
{
    int number,i,array[10],k,j,t;
    printf("enter kand number of elements");
    scanf("%d\t%d",&number,&k);
    printf("enter elements");
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
                t=array[i];
                array[i]=array[j];
                array[j]=t;
                
            }
        }
    }
    printf("the kth smallest number is %d",array[k-1]);
    return 0;
}
