#include<stdio.h>
int main(){
	float a,b;
	printf("enetr a");
	scanf("%f",&a);
	
	printf("enetr b");
	scanf("%f",&b);
	
	printf("addition: %2f\n", a+b);
	printf("subtraction: %2f\n", a-b);
	printf("multiplication: %2f\n", a*b);
	
	if (b!=0){
		
			printf("division: %2f\n", a/b);
	}
	else{
			printf("division: not divisible by 0");
	}
	
	return 0;
}
		
