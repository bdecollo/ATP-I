/* Usando as funções dos exercícios 6, 7, 8 e 9, faça um programa que realize o produto vetorial de duas matrizes 
alocadas dinamicamente (quando o produto vetorial for possível). */

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

void limparMatriz(int** matriz, int linhas){
    for (int i = 0; i < linhas; i++)
        free(matriz[i]);
    free(matriz);
}

void preencherMatriz(int** matriz, int linhas, int colunas){
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int** matriz, int linhas, int colunas){
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
}

int main(){
    int m, n, p, q;

    printf("Qual o numero de linhas e colunas da primeira matriz: ");
    scanf("%d %d", &m, &n);
    printf("Qual o numero de linhas e colunas da segunda matriz: ");
    scanf("%d %d", &p, &q);

    if (n != p){
        printf("Nao e possivel realizar a multiplicacao.\n");
        exit(0);
    }

    int** A = alocarMatriz(m, n);
    int** B = alocarMatriz(p, q);
    int** C = alocarMatriz(m, q);

    preencherMatriz(A, m, n);
    preencherMatriz(B, p, q);

    for (int i = 0; i < m; i++){
        for (int j = 0; j < q; j++){
            C[i][j] = 0;
            for (int k = 0; k < n; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    imprimirMatriz(C, m, q);

    getchar();
    return 0;
}