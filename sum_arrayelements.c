#include<stdio.h>
int main()
{
  int number,i,sum=0,array[10];
  printf("enter number of elements");
  scanf("%d",&number);
  for(i=0;i<number;i++)
  {
    scanf("%d",&array[i]);
  sum+=array[i];
    }
    printf("%d",sum);
    return 0;
}
