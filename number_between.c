#include<stdio.h>
int main()
{
    int number;
    int left_number,right_number;
    printf("\nenter the number");
    scanf("%d",&number);
    printf("\nenter the left number and right number");
    scanf("%d\t%d",&left_number,&right_number);
    if(number>=left_number && number<=right_number)
    {
        printf("\nyes");
        }
else
{
    printf("\nno");
}
    return 0;
}
