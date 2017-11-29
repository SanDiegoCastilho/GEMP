#include <stdio.h>
#include <math.h>

int main(){
	double A, B, C, Delta, R1, R2;

	scanf("%lf %lf %lf", &A, &B, &C);

	Delta = pow(B,2.00) - (4.00 * A * C);

	if (A == 0 || Delta < 0){
		printf("Impossivel calcular\n");

	}else if(Delta == 0){
		R1 = R2 = ((-1)*B)/2*A;

		printf("R1 = %.5f\n", R1);
		printf("R2 = %.5f\n", R2);

	}else{
		R1 = ((-1)*B + sqrt(Delta)) / (2*A);
		R2 = ((-1)*B - sqrt(Delta)) / (2*A);

		printf("R1 = %.5f\n", R1);
		printf("R2 = %.5f\n", R2);
	}

	return 0;
}