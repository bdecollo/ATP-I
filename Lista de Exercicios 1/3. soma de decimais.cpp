#include<stdio.h>
#include<stdlib.h>

int main() {
	float a, b, total;

	printf("Digite o primeiro numero: \n");
	scanf("%f", &a);

	printf("Digite o segundo numero: \n");
	scanf("%f", &b);

	total = a + b;

	printf("A soma dos dois valores resulta em: %f", total);

	getchar();
	return(0);
}