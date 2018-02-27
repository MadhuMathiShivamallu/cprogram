#include<stdio.h>
void main()
{
  char string[50];
  int i,temp,l;
  printf("enter string");
  scanf("%s",string);
   for(i=0;string[i]!='\0';i++)
  {
    if(i%2==0)
    {temp=string[i+1];
      string[i+1]=string[i];
      string[i]=temp;
    }
  }
  printf("%s",string);
}
