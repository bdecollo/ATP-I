// Faça uma função que dados dois vetores A e B de tamanho T, imprima os elementos que estão em ambos os vetores.

#include <stdio.h>

void imprimirIntersecao(int A[], int B[], int T){
    for (int i = 0; i < T; i++){
        for (int j = 0; j < T; j++){
            if (A[i] == B[j]){
                printf("%d ", A[i]);
                break;
            }
        }
    }
    printf("\n");
}

// Exemplo de uso da função:
int main(){
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {4, 5, 6, 7, 8};
    int T = 5;

    printf("Elementos em ambos A e B: ");
    imprimirIntersecao(A, B, T);

    getchar();
    return 0;
}