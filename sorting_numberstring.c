#include<stdio.h>
#include<string.h>
int main()
{
    char string[50];
    int count,i,j,t;
    printf("enter number");
    scanf("%[^\n]s",string);
    count=strlen(string);
    for(i=0;string[i]!='\0';i++)
    {
    for(j=i+1;j<count;j++)
    {
        if(string[i]>string[j])
        {
            t=string[i];
            string[i]=string[j];
            string[j]=t;
        }
    }   
    }
printf("%s",string);
return 0;
}
