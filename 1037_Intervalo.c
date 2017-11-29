#include <stdio.h>

int main(){
	double num;

	scanf("%lf", &num);

	if(num >= 0 && num <= 25.000000){
		printf("Intervalo [0,25]\n");

	}else if(num >= 25.000001 && num <= 50.000000){
		printf("Intervalo (25,50]\n");

	}else if(num >= 50.000001 && num <= 70.000000){
		printf("Intervalo (50,70]\n");

	}else if(num >= 75.000001 && num <= 100.000000){
		printf("Intervalo (70,100]\n");

	}else{
		printf("Fora de intervalo\n");
	}

	return 0;
}