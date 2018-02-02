#include<stdio.h>
int main()
{
    char string[50];
    int i;
    printf("enter string");
    scanf("%[^\n]s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]>=48 && string[i]<=57)
        {
            printf("%c",string[i]);
        }
    }
    return 0;
}
