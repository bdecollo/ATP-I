// Escreva uma função que Use dois ponteiros para inverter a ordem dos elementos de um array.

#include <stdio.h>

void inverterElementos(int *array, int T){
    int *inicio = array;
    int *fim = array + T - 1;
    while (inicio < fim){
        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}

// Exemplo de uso da função:
int main(){
    int v[] = {1, 2, 3, 4, 5};
    int T = sizeof(v) / sizeof(v[0]);

    printf("Array original: ");
    for (int i = 0; i < T; i++)
        printf("%d ", v[i]);

    inverterElementos(v, T);

    printf("\n");

    printf("Array invertido: ");
    for (int i = 0; i < T; i++)
        printf("%d ", v[i]);

    getchar();
    return 0;
}