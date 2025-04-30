// Crie uma função quadrática com variáveis a, b e c declaradas globalmente.

#include <stdio.h>
#include <stdlib.h>

float a, b, c;

float y(float x){
    return (a * x * x + b * x + c);
}

// Exemplo
int main(){
    a = 2.0;
    b = 3.0;
    c = 5.0;
    
    float valor_x = 2.0;
    float resultado_y = y(valor_x);

    printf("Para x = %.2f, y = %.2f\n", valor_x, resultado_y);

    return 0;
}