#include<stdio.h>
void main()
{
  char string[50],string1[50];
  int i,count=0;
  printf("enter two string of equal length");
  scanf("%s\t%s",string,string1);
  for(i=0;string[i]!='\0',string1[i]!='\0';i++)
  {
    if(string[i]!=string1[i])
    {
      count++;
    }
  }
  if(count==1)
  {printf("yes");}
  else if(count>0)
  {
    printf("differ many character");
  }
else
{
  printf("no");
}}
