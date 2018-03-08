#include<stdio.h>
int main()
{
  int number,k,c=0,i,a[10],t,j;
  printf("enter n and k value");
  scanf("%d\t%d",&number,&k);
  printf("enter the elements");
  for(i=0;i<number;i++)
  {
    scanf("%d",&a[i]); }
      for(i=0;i<number-1;i++)
    {
    for(j=i+1;j<number;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }  } 
     for(i=0;i<number;i++)
     {
       if(a[i]==k)
       {
         c++;
       break;
  }}
    if(c!=0)
    {
      printf("yes");
    }
else
{
  printf("no");
}return 0;
}
