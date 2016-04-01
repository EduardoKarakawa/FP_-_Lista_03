#include <stdio.h>
#include <stdlib.h>

int main() {
	float d;
	printf("Digite o diametro da abobora:");
	scanf_s("%f", &d);
	if (d >= 15.0f && d < 20.0f) {
		printf("Abobora do tipo medio.\n");
	}
	else {
		printf("Abobora fora das medidas.\n");
	}
	system("pause");
	return 0;
}