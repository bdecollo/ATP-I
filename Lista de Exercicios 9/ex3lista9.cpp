// Verifique se um número está presente em uma matriz e retorne sua posição (linha, coluna).

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    int n, i, j;
    int identificado = 0;

    printf("Digite um numero para identificar na matriz: ");
    scanf("%d", &n);

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (matriz[i][j] == n){
                printf("Numero %d identificado na posicao [%d, %d]\n", n, i, j);
                identificado = 1;
            }
        }
        if (identificado) break;
    }

    if (identificado != 1)
        printf("Numero %d nao identificado na matriz\n", n);

    getchar();
    return 0;
}