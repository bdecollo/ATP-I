// 2. Faça uma função recursiva que retorne a soma de todos os números de 1 até n.

#include <stdio.h>

int recursao_soma(int n){
    if (n == 1) return 1;
    else {
        return n + recursao_soma(n - 1);
    }
}

int main(){
    int numero, resultado;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &numero);

    resultado = recursao_soma(numero);

    printf("A soma de 1 ate %d resulta em %d\n", numero, resultado);

    getchar();
    getchar();
    return 0;
}