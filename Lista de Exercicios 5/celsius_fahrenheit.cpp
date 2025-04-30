// Crie uma função celsius_para_fahrenheit() que converte Celsius para Fahrenheit usando a fórmula: F = (C × 9/5) + 32.

#include <stdio.h>
#include <stdlib.h>

float celsius_para_fahrenheit(float celsius){
    return ((celsius * 9/5) + 32);
}

int main(){
    float temp_celsius;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temp_celsius);

    float fahrenheit = celsius_para_fahrenheit(temp_celsius);

    printf("%.2f celsius equivalem a %.2f Fahrenheit.\n", temp_celsius, fahrenheit);

    getchar();
    getchar();
    return 0;
}