#include<stdio.h>
void main()
{
char str[50];
int i;
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
 if(i%3==0)
 {
   printf("%c",str[i]);
 }
 }}
