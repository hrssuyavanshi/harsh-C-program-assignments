#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int square;
    
    printf("enter number:");
    scanf("%d",&num);
    
    square=num*num;
    
    printf("square of num %d=%d", num , square);

    return 0;
}