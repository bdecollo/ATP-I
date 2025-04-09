#include<stdio.h>
#include<stdlib.h>

int main() {
    unsigned long long num, fatorial = 1;
    printf("Entrada: ");
    scanf("%llu", &num);

    for (unsigned long long i = 1; i <= num; i++){
        fatorial *= i;
    }
    printf("O fatorial de %llu tem valor de: %llu\n", num, fatorial);
    return(0);
}