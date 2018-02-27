#include<stdio.h>
#include<string.h>
void main()
{
  char string[50],string1[50];
  int l,i,j,temp;
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
   }
   printf("%s",string);
}
