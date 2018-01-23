#include<stdio.h>
int main()
{
    char string[50];
    int n,i;
    printf("enter the string");
    scanf("%[^\n]s",string);
    printf("enter last position character");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%c",string[i]);
    }
    return 0;
}
