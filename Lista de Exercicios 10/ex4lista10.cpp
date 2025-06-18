#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int tamanho, i;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    array = (int *)malloc(tamanho * sizeof(int));
    if (array == NULL){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Digite %d elementos:\n", tamanho);
    for (i = 0; i < tamanho; i++){
        printf("Elemento %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("\nArray completo:\n");
    for (i = 0; i < tamanho; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    int novo_tamanho = tamanho / 2;
    array = (int *)realloc(array, novo_tamanho * sizeof(int));
    if (array == NULL && novo_tamanho > 0){
        printf("Erro ao realocar memoria.\n");
        return 1;
    }

    printf("\nArray apos realocacao:\n");
    for (i = 0; i < novo_tamanho; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    getchar();
    return 0;
}