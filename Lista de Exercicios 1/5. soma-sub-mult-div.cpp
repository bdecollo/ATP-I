#include<stdio.h>
#include<stdlib.h>

int main() {
	float a, b, add, sub, mlt, dvs;

	printf("Digite o primeiro numero: \n");
	scanf("%f", &a);

	printf("Digite o segundo numero: \n");
	scanf("%f", &b);

	add = a + b;
	sub = a - b;
	mlt = a * b;
	dvs = a / b;

	printf("A soma dos dois numeros: %0.3f\n", add);
	printf("A subtracao do primeiro pelo segundo numero: %0.3f\n", sub);
	printf("A multiplicacao entre os dois numeros: %0.3f\n", mlt);
	printf("A divisao entre os dois numeros: %0.3f\n", dvs);

	getchar();
	return(0);
}