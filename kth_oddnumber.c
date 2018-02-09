#include <stdio.h>
int main()
{
    int number,i,k,array[20];
    printf("enter number");
    scanf("%d",&number);
    printf("enter k value");
    scanf("%d",&k);
    for(i=0;i<number;i++)
    {
        scanf("%d",&array[i]);
    }
        if(array[k]%2!=0)
        {
    printf("%d",array[k]);
}
else
{
    printf("not a odd number in kth position");
}
return 0;
}
