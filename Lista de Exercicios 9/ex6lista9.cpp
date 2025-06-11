// Faça uma função que aloque uma matriz com as linhas e colunas desejadas pelo usuário.

#include <stdio.h>
#include <stdlib.h>

int** alocarMatriz(int linhas, int colunas){
    int** matriz = (int**)malloc(linhas * sizeof(int*));
    if (matriz == NULL) printf ("Memoria nao alocada.\n");

    for (int i = 0; i < linhas; i++)
        matriz[i] = (int*)malloc(colunas * sizeof(int));
        if (matriz == NULL) printf("Memoria nao alocada.\n");

    return matriz;
}

// Exemplo de uso:
int main(){
    int linhas, colunas;
    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    int** matriz = alocarMatriz(linhas, colunas);

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < linhas; j++)
            matriz[i][j] = i + j;
    }

    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < linhas; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }

    free(matriz);
    getchar();
    return 0;
}