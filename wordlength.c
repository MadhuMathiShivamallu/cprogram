#include<stdio.h>
int main()
{
    char string[45];
    int i,word=1;
    printf("enter the string");
    scanf("%[^\n]s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]==' ')
        {
            word++;
        }
    }
printf("%d",word);
    
}
