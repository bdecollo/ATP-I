#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, total;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &a);

    printf("Digite o segundo numero: \n");
    scanf("%d", &b);

    total = a + b;

    printf("A soma dos dois valores resulta em: %d", total);
    
    getchar();
    return(0);
}