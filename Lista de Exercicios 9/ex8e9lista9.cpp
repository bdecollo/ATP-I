// 8. Faça uma função para o usuário preencher uma matriz dinâmica.
// 9. Faça uma função para imprimir uma matriz dinâmica.

#include <stdio.h>
#include <stdlib.h>

// Ex. 8:
int** preencherMatriz(int linhas, int colunas){
    int** matriz = (int**)malloc(linhas * sizeof(int*));
    if (matriz == NULL){
        printf("Memoria nao alocada.\n");
    }

    for (int i = 0; i < linhas; i++){
        matriz[i] = (int*)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL){
            printf("Memoria nao alocada.\n", i);
        }
    }

    printf("Digite os elementos da matriz (%d x %d):\n", linhas, colunas);
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    return matriz;
}

// Ex. 9:
void imprimirMatriz(int** matriz, int linhas, int colunas){
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
}

// Função para liberar a memória:
void limparMatriz(int** matriz, int linhas){
    for (int i = 0; i < linhas; i++)
        free(matriz[i]);
    free(matriz);
}

// Exemplo de uso:
int main() {
    int linhas, colunas;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    int** matriz = preencherMatriz(linhas, colunas);
    imprimirMatriz(matriz, linhas, colunas);
    limparMatriz(matriz, linhas);

    getchar();
    return 0;
}