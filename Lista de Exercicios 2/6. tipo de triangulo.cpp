#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c;
	printf("Digite os tres lados do triangulo: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a + b > c && a + c > b && b + c > a) {
		if (a == b && b == c)
			printf("Equilatero.\n");
		else if (a == b || a == c || b == c)
			printf("Isosceles.\n");
		else
			printf("Escaleno.\n");
	}else{
		printf("Invalido.\n");
	}

	getchar();
	return(0);
}