#include<stdio.h>
int main()
{
  float number;
  printf("enter number");
  scanf("%f",&number);
  printf("roundedup value %.0f",ceil(number));
  return 0;
}
