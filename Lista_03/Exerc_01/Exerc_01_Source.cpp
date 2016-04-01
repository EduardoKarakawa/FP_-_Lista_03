#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	printf("Digite um numero inteiro:");
	scanf_s("%i", &x);
	if ((x % 2) == 0) {
		printf("O numero e par.\n");
	}
	else {
		printf("O numero e impar.\n");
	}
	system("pause");
	return 0;
}