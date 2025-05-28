// Crie uma função que verifique se um elemento x está presente no vetor A de tamanho T.

#include <stdio.h>

int VerificarElemento(int x, int T, int *A){
    for (int i = 0; i < T; i++)
        if (A[i] == x) return 1;
    return 0;
}

// Exemplo de uso da função:
int main(){
    int vetor[] = {2, 4, 6, 11, 18};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int elemento = 11;

    if (VerificarElemento(elemento, tamanho, vetor)){
        printf("O elemento %d esta presente no vetor.\n", elemento);
    } else {
        printf("O elemento %d nao esta presente no vetor.\n", elemento);
    }

    getchar();
    return 0;
}