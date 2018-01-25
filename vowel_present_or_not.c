#include<stdio.h>
int main()
{
    char string[100];
    int i,count=0;
printf("enter the binary string");
scanf("%s",string);
for(i=0;string[i]!='\0';i++)
{
  if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u')
  {
      count++;
      break;
  }
}
if(count>=1)
{
    printf("yes");
}
else
{
    printf("no");
}
return 0;
}
