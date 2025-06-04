/* Repita o exercício anterior, mas dessa vez o valor ‘-1’ define que não 
haverá mais valores a serem armazenados no vetor (para tal, use o realloc). */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vet = NULL;
    int n, contagem = 0;

    printf("Digite os numeros para armazenar no vetor:\n");
    printf("(-1) para interromper insercao de numeros.\n");

    do {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n != -1){
            int *temp = (int*)realloc(vet, (contagem + 1) * sizeof(int));

            if (temp != NULL){
                vet = temp;
                vet[contagem] = n;
                contagem++;

            } else {
                printf("Memoria nao alocada!\n");
                free(vet);
                vet = NULL;
                return 1;
            }
        }
    } while (n != -1);

    if (contagem > 0){
        printf("\nNumeros armazenados:\n");
        for (int i = 0; i < contagem; i++){
            printf("%d ", vet[i]);
        }
        printf("\n");

    } else {
        printf("Nenhum numero foi armazenado.\n");
    }

    free(vet);
    getchar();
    return 0;
}