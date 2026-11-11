#include<stdio.h>

int main(){
    
	int marks;
	
	printf("enetr marks from 0-100");
	scanf("%d",&marks);
	
	if(marks>100||marks<0){
	    printf("invalid marks");
	}
	
	else if(marks>=90){
	    printf("grade S");
	}
	
	else if(marks>=80){
	    printf("grade A++");
	}
	
	else if(marks>=70){
	    printf("grade A");
	}
	
	else if(marks>=60){
	    printf("grade B");
	}
	
	else if(marks>=50){
	    printf("grade C");
	}
	
	else if(marks>=40){
	    printf("grade D");
	}
	
	else if(marks>=35){
	    printf("grade E");
	}
	else{
	    printf("Fail");
	}
	
	return 0;
}
		