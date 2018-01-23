#include<stdio.h>
int main()
{
    int i,j,n,t,array[12];
        printf("enter the number of elements");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
 for(i=0;i<n-1;i++)
 {
      for(j=i+1;j<n;j++)
      {
          if(array[i]>array[j])
          {
              t=array[i];
              array[i]=array[j];
              array[j]=t;
          }
      }
 }
    printf("the largest number is %d",array[n-1]);
return 0;
    
}
