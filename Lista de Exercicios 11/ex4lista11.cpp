#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo = fopen("matriz.txt", "r");
    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    int n;
    fscanf(arquivo, "%d", &n);

    int matriz1[n][n];
    int matriz2[n][n];
    int resultado[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            fscanf(arquivo, "%d", &matriz1[i][j]);
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            fscanf(arquivo, "%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("Resultado:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            printf("%d ", resultado[i][j]);
        printf("\n");
    }

    fclose(arquivo);
    getchar();
    return 0;
}