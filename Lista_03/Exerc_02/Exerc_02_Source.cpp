#include <stdio.h>
#include <stdlib.h>

int main() {
	int nasc, idade;
	printf("Digite o ano que vc nasceu:");
	scanf_s("%d", &nasc);
	idade = 2016 - nasc;
	if (idade < 18) {
		printf("Voce nao pode tirar carteira de motorista.\n");
	}
	else {
		printf("Voce pode tirar carteira de motorista.\n");
	}
	system("pause");
	return 0;
}