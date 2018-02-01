#include<stdio.h>
int main()
{
  int array[10],number,i,num;
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
        printf("yes");
      }
    
  }
  return 0;
}
