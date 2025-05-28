/* Crie um programa que:
○ Declare dois vetores A e B de tamanho 5;
○ Leia os valores para ambos os vetores;
○ Imprima os valores de maneira intercalada (A[0], B[0], A[1], B[1]...). */

#include <stdio.h>

int main(){
    int A[5], B[5], i;

    printf("Digite 5 valores para o vetor A:\n");
    for (i = 0; i < 5; i++){
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Digite 5 valores para o vetor B:\n");
    for (i = 0; i < 5; i++){
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    printf("Valores de A e B intercalados:\n");
    for (i = 0; i < 5; i++){
        printf("A[%d] = %d, B[%d] = %d\n", i, A[i], i, B[i]);
    }

    getchar();
    return 0;
}