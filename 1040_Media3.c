#include <stdio.h>

int main(){
	double N1, N2, N3, N4, Nex, Media;

	scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

	Media = ((2.00 * N1) + (3.00 * N2) + (4.00 * N3) + N4) / 10;

	printf("Media: %.1lf\n", Media);

	if (Media >= 7.00){
		printf("Aluno aprovado.\n");

	}else if (Media < 5.00){
		printf("Aluno reprovado\n");

	}else if(Media >= 5.00 || Media <= 6.9){
		printf("Aluno em exame.\n");
		scanf("%lf", &Nex);
		printf("Nota do exame: %.1lf\n", Nex);

		if (Media >= 5.00){
			printf("Aluno aprovado.\n");

		}else{
			printf("Aluno reptovado.\n");
		}

		Media = (Nex + Media)/2;
		printf("Media final: %.1lf\n", Media);
	}

	return 0;
}