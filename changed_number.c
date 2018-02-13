#include<stdio.h>
int main()
{
    int number,j,t,i,arr[10],array[10],c=0;
    printf("enter total number and elements");
    scanf("%d",&number);
    for(i=0;i<number;i++)
{
    scanf("%d",&arr[i]);
    array[i]=arr[i];
}
for(i=0;i<=number-1;i++)
{ for(j=i+1;j<number;j++)
    { if(arr[i]>arr[j])
 {
  t=arr[i];
   arr[i]=arr[j];
      arr[j]=t;
}} }
    for(i=0;i<number;i++)
    {
        if(array[i]!=arr[i])
    {
        c++;} }
printf("%d",c-1);
return 0;
}
