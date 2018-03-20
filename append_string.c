#include<stdio.h>
#include<string.h>
int main()
{
  char string[35],str[30]=" Answer";
  int l,i,j,len;
  printf("enter the string");
  scanf("%s",string);
  l=strlen(string);
for(i=0;str[i]!='\0';i++)
{
  string[l]=str[i];
  l++;
}
printf("%s",string);
return 0;
}
