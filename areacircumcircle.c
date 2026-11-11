#include<stdio.h>

int main(){
	float r,area,circumference;
	const float PI=3.14159;
	
	printf("enetr radius r");
	scanf("%f",&r);
	
	area = PI*r*r;
	circumference =2*PI*r;
	
	printf("Area of circle= %2f\n", area);
	printf("Circumference of circle= %2f\n", circumference);
	
	return 0;
}