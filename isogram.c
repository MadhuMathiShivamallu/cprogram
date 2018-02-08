#include<stdio.h>
#include<string.h>
int main()
{
  char string1[50],string2[50];
  int i,j,count=0,len1,len2;
  printf("enter the string1");
  scanf("%s",string1);
  printf("enter the string2");
  scanf("%s",string2);
  len1=strlen(string1);
  len2=strlen(string2);
  for(i=0,j=0;string1[i]!='\0',string2[j]!='\0';i++,j++)
  {
    if(string1[i]==string2[j])
    {
      count++;
    }
  }
if(count==len1 && count==len2)
{
  printf("yes");
}
else
{
  printf("no");
}
  
}
