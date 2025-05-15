// 1. Faça um programa que imprime um número aleatório de 2 até 12 (incluso).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    printf("Numero aleatorio: %d\n", 2 + rand() % 11);
    
    getchar();
    return 0;
}