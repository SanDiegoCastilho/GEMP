/*Questão 1017 URI - Gasto de Combustível*/
#include <stdio.h>

int main(){
	int temp, vel, dist;
	float ltrs;

	scanf("%d", &temp);
	scanf("%d", &vel);

	dist = temp*vel;
	ltrs = dist / 12.00;

	printf("%.3f\n", ltrs);

	return 0;
}