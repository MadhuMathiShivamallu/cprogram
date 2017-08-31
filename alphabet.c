#include<stdio.h>
int main()
{
char character;
printf(" enter the character");
scanf("%c",&character);
if((character>=65&&character<=90)||(character>=97&&character<=122))
{
printf("the given character is alphabet");
}
else
{
printf("the given character is not alphabet");
}
return 0;
}
