#include <stdio.h>

int main(){
	int A;
	int Ccem, Ccinq, Cvin, Cdez, Ccinc, Cdois, Cum;

	Ccem = 0;
	Ccinq = 0;
	Cvin = 0;
	Cdez = 0;
	Ccinc = 0;
	Cdois = 0;

	scanf("%d", &A);

	printf("%d\n", A);

	Ccem =  A/100;
	A = A - (Ccem * 100);
	Ccinq =  A/50;
	A = A - (Ccinq * 50);
	Cvin =  A/20;
	A = A - (Cvin * 20);
	Cdez =  A/10;
	A = A - (Cdez * 10);
	Ccinc =  A/5;
	A = A - (Ccinc * 5);
	Cdois =  A/2;
	A = A - (Cdois * 2);

	printf("%d nota(s) de R$ 100,00\n", Ccem);
	printf("%d nota(s) de R$ 50,00\n", Ccinq);
	printf("%d nota(s) de R$ 20,00\n", Cvin);
	printf("%d nota(s) de R$ 10,00\n", Cdez);
	printf("%d nota(s) de R$ 5,00\n", Ccinc);
	printf("%d nota(s) de R$ 2,00\n", Cdois);
	printf("%d nota(s) de R$ 1,00\n", A);


	return 0;
}