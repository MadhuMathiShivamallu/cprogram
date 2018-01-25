#include<stdio.h>
int main()
{
    char string[100];
    int i,count=0,c=0;
    printf("enter the string");
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
    for(i=0;i<count;i++)
    {
    if(string[i]=='0' || string[i]=='1')
    {
        c++;
    }
    }
printf("%d",c);
if(c==count)
{
    printf("yes");
}
else
{
    printf("no");
}
return 0;
}
