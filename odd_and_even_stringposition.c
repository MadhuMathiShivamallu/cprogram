#include<stdio.h>
int main()
{
  char string[100];
  int i;
  printf("enter the string");
  scanf("%s",string);
  for(i=0;string[i]!='\0';i++)
  {
    if(i%2==0)
    {
      printf("%c",string[i]);
    }
    }printf("\t");
   for(i=0;string[i]!='\0';i++)
  {
    if(i%2!=0)
    {
      printf("%c",string[i]);
    }
    }
 return 0;
}
