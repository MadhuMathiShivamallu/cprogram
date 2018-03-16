#include<stdio.h>
#include<string.h>
void main()
{
  char string[50];
  int i,c=0,co=0,l;
  scanf("%s",string);
  l=strlen(string);
  for(i=0;string[i]!='\0';i++)
  {
    if(string[i]=='(')
    {
      c++;
    }
    else 
    {
      co++;
    }}
  if((c==co)&&(string[0]!=')')&&(string[l-1]='('))
  {
    printf("yes");}
  else
  { printf("no");
  }}
