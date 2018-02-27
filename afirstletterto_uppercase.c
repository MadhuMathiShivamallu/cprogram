#include<stdio.h>
int main()
{
    char str[30];
    int i;
    printf("enter string");
    scanf("%[^\n]s",str);
    str[0]=str[0]-32;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {i++;
            str[i]=str[i]-32;
        }
    }
    printf("%s",str);
    return 0;
}
