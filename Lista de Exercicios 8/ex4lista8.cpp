/* Dado um vetor dinâmico V de n inteiros, crie uma função que retorne um novo 
vetor S alocado dinamicamente que contenha apenas os elementos pares de V. */

#include <stdio.h>
#include <stdlib.h>

int* filtrarPares(int *V, int n, int* tamanho_S){
    int* S = (int *)malloc(n * sizeof(int));
    int j = 0;

    for (int i = 0; i < n; i++){
        if (V[i] % 2 == 0)
            S[j++] = V[i];
    }

    *tamanho_S = j;

    S = (int *)realloc(S, j * sizeof(int));
    return S;
}

// Exemplo de uso:
int main(){
    int V[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(V) / sizeof(V[0]);

    int tamanho_S;
    int* S = filtrarPares(V, n, &tamanho_S);

    printf("Elementos pares:\n");
    for (int i = 0; i < tamanho_S; i++)
        printf("%d ", S[i]);
    printf("\n");

    free(S);
    getchar();
    return 0;
}