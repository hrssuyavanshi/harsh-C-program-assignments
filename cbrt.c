#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    double cuberoot;
    
    printf("enter number:");
    scanf("%d",&num);
    
    cuberoot=cbrt(num);
    
    printf("cuberoot of num %d=%f", num , cuberoot);

    return 0;
}