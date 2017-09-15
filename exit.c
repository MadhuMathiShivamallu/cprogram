#include<stdio.h>
int main()
{
    char c;
    printf("enter the character");
    scanf("%c",&c);
    switch(c)
    {
        case 'Q':
        exit(0);
        break;
        default:
        printf("you pressed another character");
        break;
    }
    return 0;
    
}
