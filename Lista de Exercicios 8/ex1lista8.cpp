/* Peça ao usuário um número n, aloque um vetor de inteiros com n posições,
preencha com valores sequenciais e imprima. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *vet;

    printf("Digite a quantidade n de posicoes: ");
    scanf("%d", &n);

    vet = (int *)malloc(n * sizeof(int));

    if (vet){
        for (int i = 0; i < n; i++)
            vet[i] = i;
        
        for (int i = 0; i < n; i++)
            printf("%d ", vet[i]);
        printf("\n");
        
    } else {
        printf("Memoria nao alocada!\n");
    }

    free(vet);
    getchar();
    return 0;
}