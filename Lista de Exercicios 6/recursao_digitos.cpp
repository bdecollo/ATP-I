// 3. Faça uma função recursiva que retorne a quantidade de dígitos de um número inteiro.

#include <stdio.h>

int contagem_digitos(int num){
    if (num < 10) return 1;
    return 1 + contagem_digitos(num / 10);
}

int main(){
    int numero;

    printf("Insira um numero para contagem dos digitos: ");
    scanf("%d", &numero);
    printf("Quantidade de digitos: %d\n", contagem_digitos(numero));

    getchar();
    getchar();
    return 0;
}