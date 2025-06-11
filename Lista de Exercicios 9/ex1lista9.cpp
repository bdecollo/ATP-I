// Crie uma função que recebe duas matrizes 3x3 e retorna a soma delas.

#include <stdio.h>
#include <stdlib.h>

void somarMatrizes(int A[3][3], int B[3][3], int resultado[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            resultado[i][j] = A[i][j] + B[i][j];
    }
}

void imprimirResultado(int resultado[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            printf("%d ", resultado[i][j]);
        printf("\n");
    }
}

// Exemplo de uso:
int main(){
    int matriz1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int matriz2[3][3] = {
        {5, 6, 7},
        {8, 9, 1},
        {2, 3, 4}
    };

    int resultado[3][3];

    somarMatrizes(matriz1, matriz2, resultado);

    printf("Soma das matrizes:\n");
    imprimirResultado(resultado);

    getchar();
    return 0;
}