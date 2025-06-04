/* Faça um programa que armazene todos os valores de um vetor passado pelo
usuário. Peça ao usuário um número n, inicialmente, que representa quantos
números serão armazenados. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vet, n;

    printf("Digite a quantidade de numeros que serao armazenados: ");
    scanf("%d", &n);

    vet = (int *)malloc(n * sizeof(int));

    if (vet){
        for (int i = 0; i < n; i++){
            printf("Digite o numero %d: ", i + 1);
            scanf("%d", &vet[i]);
        }
        printf("Numeros armazenados:\n");
        for (int i = 0; i < n; i++){
            printf("%d ", vet[i]);
        }
        printf("\n");

    } else {
        printf("Memoria nao alocada!\n");
    }

    free(vet);
    getchar();
    return 0;
}