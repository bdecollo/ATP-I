#include<stdio.h>
#include<stdlib.h>

int main() {
    int altura, i, j;
    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    for (i = 1; i <= altura; i++){
        for (j = 1; j <= altura - i; j++){
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++){
            printf("*");
        }
        printf("\n");
    }
    getchar();
    return(0);
}