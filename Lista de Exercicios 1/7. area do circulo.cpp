#include<stdio.h>
#include<stdlib.h>

int main() {
    int r;
    double areacirculo;
    
    printf("Digite o valor do raio do circulo: ");
    scanf("%d", &r);
    
    areacirculo = 3.14 * r * r;
    
    printf("A area do circulo e: %.2lf\n", areacirculo);
    
    getchar();
    return(0);
}