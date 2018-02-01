#include<stdio.h>
int main()
{
  int array[10],count=0,number,i,num;
  printf("enter total number");
  scanf("%d",&number);
  printf("enter elements");
  for(i=0;i<number;i++)
  {
    scanf("%d",&array[i]);
  }
  printf("enter searching element");
  scanf("%d",&num);
  for(i=0;i<number;i++)
  {
      if(num==array[i])
      {
        count++;
      
      }
    
  }
  printf("repeated times %d",count);
  return 0;
}
