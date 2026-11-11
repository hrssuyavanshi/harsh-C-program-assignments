#include<stdio.h>

int main(){
    
	float p,simple_interest,r,t;
	
	printf("enetr principal amount");
	scanf("%f",&p);
	
	printf("enetr rate of interest");
	scanf("%f",&r);
	
	printf("enetr time in years");
	scanf("%f",&t);
	
	simple_interest = (p*r*t)/100;
	
	printf("simple interest = %2f\n", simple_interest);
	
	return 0;
}