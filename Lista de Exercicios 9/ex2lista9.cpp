// Escreva uma função que calcula a transposta de uma matriz 3x3.

#include <stdio.h>
#include <stdlib.h>

void criarTransposta(int matriz[3][3], int transposta[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            transposta[j][i] = matriz[i][j];
    }
}

void imprimirResultado(int resultado[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            printf("%d\t", resultado[i][j]);
        printf("\n");
    }
}

// Exemplo de uso:
int main(){
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int transposta[3][3];

    printf("Matriz original:\n");
    imprimirResultado(matriz);

    criarTransposta(matriz, transposta);

    printf("Matriz transposta:\n");
    imprimirResultado(transposta);

    getchar();
    return 0;
}