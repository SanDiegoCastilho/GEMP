#include <stdio.h>

int main(){
	int Cod, Qnt;
	float Preco;

	scanf("%d %d", &Cod, &Qnt);

	switch(Cod){
		case 1:
			Preco = 4 * Qnt;
			break;
		case 2:
			Preco = 4.5 * Qnt;
			break;
		case 3:
			Preco = 5 * Qnt;
			break;
		case 4:
			Preco = 2 * Qnt;
			break;
		case 5:
			Preco = 1.5 * Qnt;
			break;
	}		

	printf("Total: R$ %.2f\n",Preco);

	return 0;
}