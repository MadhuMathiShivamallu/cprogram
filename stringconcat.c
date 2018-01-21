#include<stdio.h>
int main()
{
    char string[100],string2[100];
    int i,j,count=0;
    printf("enter the first string");
    gets(string);
    printf("enter the second string");
    gets(string2);
    for(i=0;string[i]!='\0';i++)
    {count++;
    }i=count;
 for(j=0;string2[j]!='\0';++j,++i)
    {
        string[i]=string2[j];
    }
    
printf("the string is %s",string);
    return 0;
    }
