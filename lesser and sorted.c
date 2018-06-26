#include <stdio.h>
int main()
{
int number,k,i,j,t,array[20];
printf("enter the number of elements and k value");
scanf("%d\t%d",&number,&k);
printf("enter the elements");
for(i=0;i<number;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<number;i++)
    for(j=i+1;j<number;j++)
        if(array[i]>array[j])
            t=array[i];
            array[i]=array[j];
            array[j]=t;
for(i=0;i<number;i++)
{
    if(array[i]<k)
    {
        printf("\n%d",array[i]);
    }
}

    return 0;
}
