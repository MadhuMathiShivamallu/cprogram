#include<stdio.h>
void main()
{
  char string[50];
  int i;
  printf("enter string");
  scanf("%[^\n]s",string);
  for(i=0;string[i]!='\0';i++)
  {
    if(string[i]==' ')
{
  string[i]=string[i+1];
}
  }
printf("%s",string);
}
