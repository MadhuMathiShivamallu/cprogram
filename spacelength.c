#include<stdio.h>
int main()
{
char string[60];
int i,space=0;
printf("enter the string");
scanf("%[^\n]s",string);
for(i=0;string[i]!='\0';i++)
{
if(string[i]==' ')
{
space++;
}
}
printf("number of space is %d",space);
return 0;
}
