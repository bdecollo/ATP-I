#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <inicio> <fim>\n", argv[0]);
        return 1;
    }

    int inicio = atoi(argv[1]);
    int fim = atoi(argv[2]);

    if (inicio > fim) {
        printf("O valor inicial deve ser menor ou igual ao valor final\n");
        return 1;
    }

    printf("Numeros primos entre %d e %d:\n", inicio, fim);

    for (int num = inicio; num <= fim; num++){
        if (num < 2) continue;

        int eh_primo = 1;

        for (int i = 2; i * i <= num; i++){
            if (num % i == 0) {
                eh_primo = 0;
                break;
            }
        }

        if (eh_primo)
            printf("%d ", num);
    }

    printf("\n");

    getchar();
    return 0;
}