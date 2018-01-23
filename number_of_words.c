#include<stdio.h>
int main()
{
    char words[45];
    int i,number=1;
    printf("enter the string");
    scanf("%[^\n]s",words);
    for(i=0;words[i]!='\0';i++)
    {
        if(words[i]==' ')
        {
            number++;
        }
    }
printf("%d",number);
    
}
