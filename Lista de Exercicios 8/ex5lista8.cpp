/* Simule uma matriz 3x3 preenchida com 0, usando um único vetor alocado
dinamicamente. Imprima o vetor no formato de matriz. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int linhas = 3;
    int colunas = 3;
    int *matriz = (int *)malloc(linhas * colunas * sizeof(int));

    if (matriz == NULL){
        printf("Memoria nao alocada!\n");
        return 1;
    }

    for (int i = 0; i < linhas * colunas; i++)
        matriz[i] = 0;

    printf("Matriz 3x3:\n");
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++)
            printf("%d ", matriz[i * colunas + j]);
        printf("\n");
    }

    free(matriz);
    getchar();
    return 0;
}