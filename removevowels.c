
#include<stdio.h>
#include<string.h>
int main()
{
  char string[40],string1[50];
  int i,j,l,temp;
  printf("enter string");
  scanf("%s",string);
   l=strlen(string);
i=0;
j=l-1;
 while (i < j) {
      temp = string[i];
      string[i] = string[j];
      string[j] = temp;
      i++;
      j--;
   }printf("%s",string);
  for(i=0,j=0;i<l;i++,j++)
  {
    if((string[i]!='a') && (string[i]!='e') && (string[i]!='i') && (string[i]!='o') && (string[i]!='u')&&(string[i]!='A') && (string[i]!='E') && (string[i]!='I') && (string[i]!='O') && (string[i]!='U'))
    {
      string1[j]=string[i];}
      else
      {
        j--;
      }
   }printf("\n%s",string1);
      return 0;}
