#include <stdio.h>
#include <math.h>

int main(){
	double valor, PrtFlut, PrtInt;
	int AuxInt, AuxFlut;
	int notas[6], moedas[6];

	scanf("%lf", &valor);

	PrtFlut = modf(valor, &PrtInt);

	AuxInt = PrtInt;
	AuxFlut = PrtFlut * 100.01;

	notas[0] = AuxInt/100;
	AuxInt %= 100;

	notas[1] = AuxInt/50;
	AuxInt %= 50;
	moedas[1] = AuxFlut/50;
	AuxFlut %= 50;

	notas[2] = AuxInt/20;
	AuxInt %= 20;
	moedas[2] = AuxFlut/25;
	AuxFlut %= 25;

	notas[3] = AuxInt/10;
	AuxInt %= 10;
	moedas[3] = AuxFlut/10;
	AuxFlut %= 10;

	notas[4] = AuxInt/5;
	AuxInt %= 5;
	moedas[4] = AuxFlut/5;
	AuxFlut %= 5;

	notas[5] = AuxInt/2;
	AuxInt %= 2;

	moedas[0] = AuxInt;
	moedas[5] = AuxFlut;

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",notas[0]);
	printf("%d nota(s) de R$ 50.00\n",notas[1]);
	printf("%d nota(s) de R$ 20.00\n",notas[2]);
	printf("%d nota(s) de R$ 10.00\n",notas[3]);
	printf("%d nota(s) de R$ 5.00\n",notas[4]);
	printf("%d nota(s) de R$ 2.00\n",notas[5]);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",moedas[0]);
	printf("%d moeda(s) de R$ 0.50\n",moedas[1]);
	printf("%d moeda(s) de R$ 0.25\n",moedas[2]);
	printf("%d moeda(s) de R$ 0.10\n",moedas[3]);
	printf("%d moeda(s) de R$ 0.05\n",moedas[4]);
	printf("%d moeda(s) de R$ 0.01\n",moedas[5]);

	return 0;
}