#include<stdio.h>
int main()
{
char string[30];
int i;
printf("enter the string");
scanf("%s",&string);
for(i=0;string[i]!='\0';i++)
{
if(string[i]>=48 && string[i]<=57)
{
count=+1;
}
}
if(count>0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
