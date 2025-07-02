#include <stdio.h>

#define ESCALA 10000

typedef struct {
    int valor;
} Decimal;

Decimal criarDecimal(double num){
    Decimal d;
    d.valor = (int)(num * ESCALA);
    return d;
}

Decimal somarDecimais(Decimal d1, Decimal d2){
    Decimal result;
    result.valor = d1.valor + d2.valor;
    return result;
}

Decimal subtrairDecimais(Decimal d1, Decimal d2){
    Decimal result;
    result.valor = d1.valor - d2.valor;
    return result;
}

void imprimirDecimal(Decimal d){
    int parteInteira = d.valor / ESCALA;
    int parteFracionaria = d.valor % ESCALA;

    if (parteFracionaria < 0) {
        parteFracionaria = -parteFracionaria;
    }

    printf("%d.%04d", parteInteira, parteFracionaria);
}

// Exemplo de uso:
int main(){
    Decimal a = criarDecimal(-13.63);
    Decimal b = criarDecimal(50);

    Decimal soma = somarDecimais(a, b);
    printf("Soma dos decimais: ");
    imprimirDecimal(soma);

    printf("\n");

    Decimal c = criarDecimal(82.6);
    Decimal d = criarDecimal(3.14);

    Decimal subtracao = subtrairDecimais(c, d);
    printf("Subtracao dos decimais: ");
    imprimirDecimal(subtracao);

    getchar();
    return 0;
}