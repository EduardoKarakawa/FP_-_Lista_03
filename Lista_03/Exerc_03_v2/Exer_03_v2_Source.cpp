#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int x;
	printf("Digite um numero positivo inteiro:");
	scanf_s("%i", &x);
	if (x < 0) {
		printf("O numero digitado nao eh valido.\n");
	}
	else {
		printf("A raiz de %i eh %.2f.\n", x, sqrt(x));
	}
	system("pause");
	return 0;
}