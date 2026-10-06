#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    double squareroot;
    
    printf("enter number:");
    scanf("%d",&num);
    
    squareroot=sqrt(num);
    
    printf("squareroot of num %d=%f", num , squareroot);

    return 0;
}