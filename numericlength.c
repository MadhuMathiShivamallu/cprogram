#include<stdio.h>
int main()
{
char string[60];
int i,number=0;
printf("enter the string");
scanf("%[^\n]s",string);
for(i=0;string[i]!='\0';i++)
{
if(string[i]>=48 && string[i]<=57 )
{
number++;
}
}
printf("number of numeric character is %d",number);
return 0;
}
