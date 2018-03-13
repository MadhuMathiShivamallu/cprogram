#include<stdio.h>
int main()
{
  char string[40],string1[60];
  int i;
  printf("enter the string");
  scanf("%s",string);
  for(i=0;string[i]!='\0';i++)
{
  if(string[i]<'X')
  {
    string1[i]=string[i]+3;
  }
  else if(string[i]=='X')
  {
    string1[i]='A';
}else if(string[i]=='Y')
  {
    string1[i]='B';
}
else
{
string1[i]='C';
}}printf("%s",string1);
return 0;
}
