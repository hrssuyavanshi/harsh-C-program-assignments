#include <stdio.h>

int main()
{
    int n,i,fact=1;

    printf("Harsh Suryavanshi\n");
    printf("FCA42, Comp A\n");

    printf("enter number");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    
    printf("factorial=%d",fact);
    
    return 0;
}