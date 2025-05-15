// Crie uma função calcular_circulo() que calcule o perímetro e a área e os armazena em duas variáveis (use ponteiros de endereços).

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcular_circulo(float raio, float *perimetro, float *area){
    *perimetro = 2 * M_PI * raio;
    *area = M_PI * pow(raio, 2);
}

int main(){
    float raio_circulo, perimetro_circulo, area_circulo;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio_circulo);

    calcular_circulo(raio_circulo, &perimetro_circulo, &area_circulo);

    printf("Considerando um circulo de raio %.2f, o perimetro eh %.2f e a area eh %.2f.\n", raio_circulo, perimetro_circulo, area_circulo);

    getchar();
    getchar();
    return 0;
}