#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int cube;

    printf("Harsh Suryavanshi\n");
    printf("FCA42, Comp A\n");
    
    printf("enter number:");
    scanf("%d",&num);
    
    cube=num*num*num;
    
    printf("cube of num %d=%d", num , cube);

    return 0;
}