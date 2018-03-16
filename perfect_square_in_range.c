#include<stdio.h>
#include<string.h>
int main()
{
 int f,l,i,j,count=0,k;
 printf("enter the  l and k value");
 scanf("%d%d",&f,&l);
 for(i=f;i<=l;i++)
 {k=i*i;
  for(j=1;j<=l;j++)
  {
    if((i*j==k)&&(k<=l))
    {count++;
 break;
    }
 }
 }printf("%d",count);
 return 0;
}
 
