// Calcule a soma dos elementos da diagonal principal de uma matriz 3x3.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    int soma = 0;
    
    for (int i = 0; i < 3; i++)
        soma += matriz[i][i];

    printf("A soma da diagonal principal e: %d\n", soma);

    getchar();
    return 0;
}