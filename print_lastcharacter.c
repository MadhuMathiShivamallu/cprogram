#include<stdio.h>
int main()
{
    char string[100];
    int n,i,c=0,s;
    printf("enter string");
    scanf("%s",string);
    scanf("%d",&n);
    for(i=0;string[i]!='\0';i++)
    {
        c++;
}
s=c-n;
for(i=s;i<=c;i++)
{
    printf("%c",string[i]);
}
return 0;
}
