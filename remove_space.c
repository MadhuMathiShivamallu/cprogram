
#include<stdio.h>
#include<string.h>
void main()
{
  char string[50],string1[50];
  int c=0,i,count=0,j,l;
  
  printf("enter string with more space");
  scanf("%[^\n]s",string);
 for(i=0;string[i]!='\0';i++)
  {
    if(string[i]==' ')
    {c++;
  }string1[i]=string[i];
   l=strlen(string);
}
 for(i=0;string[i]!='\0';i++)
{
  if((string[i]==' ')&&(c>1)&&(string[i]!='\0'))
  {
    for(j=i+c;string[j]!='\0';j++)
{i++;
  string1[i]=string[j];
}
 string1[i+1]='\0';break;
  }
  }
printf("%s",string1);
}
