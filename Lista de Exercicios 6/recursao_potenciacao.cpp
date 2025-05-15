// 4. Escreva uma função que calcule base elevada por expoente usando recursão (assuma expoente positiva).

#include <stdio.h>

int potencia(int base, int expoente){
    if (expoente <= 0) return 1;
    return (base * potencia(base, expoente - 1));
}

int main(){
    int base, expoente;

    printf("Digite a base da potenciacao: ");
    scanf("%d", &base);
    printf("Digite o expoente da potenciacao: ");
    scanf("%d", &expoente);

    printf("A potenciacao resulta em: %d\n", potencia(base, expoente));

    getchar();
    getchar();
    return 0;
}