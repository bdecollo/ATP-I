// Crie uma função eh_palindromo() que recebe um número inteiro e retorna 1 se for palíndromo (ex: 121) ou 0 caso contrário.

#include <stdio.h>
#include <stdlib.h>

int eh_palindromo(int num){
    int original = num;
    int invertido = 0;
    int resto;
    
    if (num < 0){
        return 0;
    }

    if (num == 0){
        return 1;
    }

    while (num > 0){
        resto = num % 10;
        invertido = invertido * 10 + resto;
        num /= 10;
    }

    if (invertido == original){
        return 1;
    } 
    else {
        return 0;
    }
}

int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    int resultado = eh_palindromo(num);

    if (resultado == 0){
        printf("%d nao eh palindromo.\n", num);
    }
    else if (resultado == 1){
        printf("%d eh palindromo.\n", num);
    }

    getchar();
    getchar();
    return 0;
}