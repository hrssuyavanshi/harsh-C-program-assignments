#include <stdio.h>

int main()
{
    int n,i,fact=1;

// Harsh Suryavanshi //
// FCA42 Comp A//

    printf("enter number");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    
    printf("factorial=%d",fact);
    
    return 0;
}