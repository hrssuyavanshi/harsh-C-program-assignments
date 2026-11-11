#include<stdio.h>
int main(){
	int a,b;
	
	printf("enetr a");
	scanf("%d",&a);
	
	printf("enetr b");
	scanf("%d",&b);
	
	if(a>b){
	    printf("a is greater than b");
	}
	
	else if(a<b){
	    printf("b is greater than a");
	}
	
	else{
	    printf("a and b are equal");
	}
	
	return 0;
}
		