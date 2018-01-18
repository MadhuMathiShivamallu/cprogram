#include <stdio.h>

int main() 
{
	char string[50];
	int i,count=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",string);
	for(i=0;string[i]!='\0';i++)
	{
		count=count+1;
	}
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]==' ')
		{
			count=count-1;
		}
	}
	printf("\n%d",count);
	return 0;
}
