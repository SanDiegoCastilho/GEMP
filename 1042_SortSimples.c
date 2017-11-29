#include <stdio.h>

int main(){
	int A, B, C, X, Y, Z, aux;

	scanf("%d %d %d", &A, &B, &C);

	aux = 0;
	X = A;
	Y = B;
	Z = C;

	if (A < B){
		aux = A;
		A = B;
		B = aux;
	}

	if (B < C){
		aux = B;
		B = C;
		C = aux;
	}

	if (A < B){
		aux = A;
		A = B;
		B = aux;
	}

	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", C, B, A, X, Y, Z);

	return 0;
}
