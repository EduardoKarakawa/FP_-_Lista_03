#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, n, i = 1, raiz = 0;
	printf("Digite um numero positivo inteiro:");
	scanf_s("%i", &x);
	if (x < 0) {
		printf("O numero digitado nao eh valido.\n");
	}
	else {
		n = x;
		while (n >= i) {
			n = n - i;
			i = i + 2;
			raiz = raiz + 1;
		}
		if (n > 0) {
			printf("O numero não possui raiz exata.\n");
			system("pause");
			return 0;

		}
		printf("A raiz de %i eh %i.\n", x, raiz);
	}
	system("pause");
	return 0;
}