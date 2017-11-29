#include <stdio.h>

int main(){
	float x,y;

	scanf("%f %f", &x, &y);

	if(x == 0.00 && y == 0.00){
		printf("Origem\n");

	}else if(x > 0.00 && y > 0.00){
		printf("Q1\n");

	}else if(x > 0.00 && y < 0.00){
		printf("Q4\n");

	}else if(x < 0.00 && y > 0.00){
		printf("Q2\n");

	}else{
		printf("Q3\n");
	}

	return 0;
}