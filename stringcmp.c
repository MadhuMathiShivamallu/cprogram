#include<stdio.h>
int main()
{ int i=0,number=0;

    char string1[30];
    char string2[30];
    printf("enter the first string");
    gets(string1);
    printf("enter the second string");
    gets(string2);
    while((string1[i]!='\0')||(string2[i]!='\0'))
    {
        if(string1[i]!=string2[i])
        {
            number++;
        }
    
        i++;
    }
if(number==0)
    {
        printf("the strings are equal");
        }
else
    {
        printf("the strings are not equal");
    }
    return 0;
    }
