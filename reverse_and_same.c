#include<stdio.h>
#include<string.h>
int main()
{
char string[50],string1[59];
int i,l,k,j;
printf("enter the string and k value");
scanf("%s\t%d",string,&k);
l=strlen(string);
for(i=l-k,j=0;string[i]!=0,j<k;i++,j++)
{
  string1[j]=string[i];
  printf("%d\t%d\n",j,k);
  if((k-1)==j)
  {
    for(i=0,j=k;i<k,j<l;j++,i++)
    {
      string1[j]=string[i];
    }
  }
}printf("%s",string1);
return 0;}
