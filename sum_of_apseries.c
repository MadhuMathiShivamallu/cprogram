#include <stdio.h>
int main() {
    int n,d,f, value, sum=0, i;
 
    printf("Enter the number of terms&first,&difference in AP series\n");
    scanf("%d%d %d",&n, &f, &d);
value = f;
        for(i=0;i<n;i++) {
        sum+=value;
        value=value+d;}
 printf("sum %d", sum);
    return 0;}
