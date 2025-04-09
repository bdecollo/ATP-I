#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    long long anterior = 0, atual = 1, proximo;

    printf("Digite um numero (limite da sequencia): ");
    scanf("%d", &n);
    printf("Sequencia de Fibonacci ate nao passar de %d:\n", n);
    printf("%lld", anterior);

    if (n == 0){
        printf("\n");
        return 0;
    }
    if (atual <= n){
        printf(", %lld", atual);
    }
    while (1){
        proximo = anterior + atual;
        if (proximo > n) {
            break;
        }
        printf(", %lld", proximo);
        anterior = atual;
        atual = proximo;
    }
    printf("\n");
    getchar();
    return(0);
}