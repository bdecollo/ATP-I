// Crie uma função eh_primo() que recebe um número inteiro e retorna 1 se for primo ou 0 caso contrário.

#include <stdio.h>
#include <stdlib.h>

int eh_primo(int num){
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0) return 0;

    for (int i = 3; i * i <= num; i = i + 2){
        if (num % i == 0){
            return 0;
        }
    }
    
    return 1;
}

int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    int resultado = eh_primo(num);

    if (resultado == 1){
        printf("Primo\n");
    } else {
        printf("Composto\n");
    }

    getchar();
    getchar();
    return 0;
}