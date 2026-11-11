#include<stdio.h>

int main() {
    
    int n,i,sum=0;
    
    printf("enter a positive integer");
    scanf("%d",&n);
    
    if(n<=0){
        printf("enetr valid no.");
    }
    else{
        for(i=1;i<=n;i++){
            sum=sum+i;
        }
        
        printf("sum of natural numbers=%d\n", sum);
    }
    
    return 0;
}