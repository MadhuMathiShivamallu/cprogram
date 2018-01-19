#include<stdio.h>
int main()
{
    char line[100];
    int i,count=0;
    printf("enter the string");
    scanf("%[^\n]s",line);
    for(i=0;line[i]!='\0';i++)
    {
        if(line[i]=='.')
        {
            count++;
        }
    }
printf("the number of lines is %d",count);
return 0;
    
}
