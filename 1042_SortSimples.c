#include <stdio.h>

int main(){
	int vetor1[3], vetor2[3], aux;

	scanf("%d %d %d", &vetor1[0], &vetor1[1], &vetor1[2]);

	for (int i = 0; i <= 2; i++){
		vetor2[i] = vetor1[i];
	}

	if(vetor1[0] > vetor1[1]){
		aux = vetor1[0];
		vetor1[0] = vetor1[1];
		vetor1[1] = aux;
	}

	if (vetor1[1] > vetor1[2]){
		aux = vetor1[1];
		vetor1[1] = vetor1[2];
		vetor1[2] = aux;
	}

	if (vetor1[0] > vetor1[1]){
		aux = vetor1[0];
		vetor1[0] = vetor1[1];
		vetor1[1] = aux;
	}


	for (int i = 0; i <= 2; i++){
		printf("%d\n", vetor1[i]);
	}

	printf("\n");

	for (int i = 0; i <= 2; i++){
		printf("%d\n", vetor2[i]);
	}


	return 0;
}