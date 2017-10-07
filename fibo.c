#include<stdio.h>
int main()
{
    int first=0,last=1,number,series;
    printf("enter the range of number");
    scanf("%d",&number);
    printf("the fibonacci series is\n");
    printf("%d\n%d\n",first,last);
    for(int i=2;i<=number;i++)
   {
       series=first+last;
       printf("%d\n",series);
       first=last;
       last=series;
       
   } 
return 0;
    
}
