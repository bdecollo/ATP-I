#include <stdio.h>
#include <math.h>

double arredondar(double valor, int casas) {
    double fator = pow(10, casas);
    return round(valor * fator) / fator;
}

double arredondar_default(double valor) {
    return arredondar(valor, 0);
}

int main() {
    double x = 3.53535;

    printf("Numero original: %f\n", x);
    printf("Arredondado para 2 casas decimais: %.2f\n", arredondar(x, 2));
    printf("Arredondado para nenhuma casa decimal: %.0f\n", arredondar_default(x));

    getchar();
    return 0;
}