#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    double r, areacirculo;
    const double pi = 3.141592653589793;
    
    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &r);
    
    areacirculo = pi * pow (r, 2);
    
    printf("A area do circulo e: %.2lf", areacirculo);
    
    getchar();
    return(0);
}