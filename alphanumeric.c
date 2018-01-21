#include<stdio.h>
#include<ctype.h>
int main()
{
char string[100];
printf("enter the string");
scanf("%s",string);
if(isalnum(string))
{
    printf("yes");
}
    else
    {
        printf("no");
    }
return 0;
}
