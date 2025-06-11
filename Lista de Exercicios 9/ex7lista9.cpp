// Faça uma função para liberar o espaço alocado pela matriz (a quantidade de linha entra como parâmetro).

#include <stdio.h>
#include <stdlib.h>

void limparMatriz(int** matriz, int linhas){
    for (int i = 0; i < linhas; i++)
        free(matriz[i]);
    free(matriz);
}

// Exemplo de uso:
int main() {
    int linhas = 4, colunas = 4;

    int **matriz = (int**)malloc(linhas * sizeof(int *));
    if (matriz == NULL) {
        printf("Erro ao alocar memória para as linhas.\n");
        return 1;
    }

    for (int i = 0; i < linhas; i++){
        matriz[i] = (int*)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL){
            printf("Erro ao alocar memória para a linha %d.\n", i);
            limparMatriz(matriz, i);
            return 1;
        }
    }

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++)
            matriz[i][j] = i * colunas + j;
    }

    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }

    limparMatriz(matriz, linhas);

    getchar();
    return 0;
}