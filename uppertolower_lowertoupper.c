#include<stdio.h>
void main()
{
  char string[50];
  int i;
  printf("enter string");
  scanf("%s",string);
  for(i=0;string[i]!='\0';i++)
  {
    if((string[i]>=97) && (string[i]<=122))
    {
      string[i]=string[i]-32;
    }
   else
    {
    string[i]=string[i]+32;
    }
}
printf("%s",string);
}
