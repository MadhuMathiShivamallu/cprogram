#include<stdio.h>
int main()
{
  int number,array[10],k,i;
  printf("enter number");
  scanf("%d",&number);
  printf("enter kth number");
  scanf("%d",&k);
  for(i=0;i<number;i++)
  {
    scanf("%d",&array[i]);
  }
  printf("%d",array[k]);
  return 0;
}
