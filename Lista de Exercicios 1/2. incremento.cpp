#include<stdio.h>
#include<stdlib.h>

int main() {
    int a, b, total = 0;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &a);

    printf("Digite o segundo numero: \n");
    scanf("%d", &b);

    while (a > 0) {
        total++;
        a--;
    }

    while (b > 0) {
        total++;
        b--;
    }

    printf("A soma dos dois valores resulta em: %d\n", total);
    
    getchar();
    return(0);
}