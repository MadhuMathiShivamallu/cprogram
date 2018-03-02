#include<stdio.h>
void main()
{
  char string[50];
  int i,c=0,co=0;
  scanf("%s",string);
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
  if(c==co)
  {
    printf("yes");}
  else
  { printf("no");
  }}
