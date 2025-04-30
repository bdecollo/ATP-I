// Crie uma função distancia() que recebe coordenadas (x1, y1) e (x2, y2) e retorna a distância euclidiana entre os pontos. 
// Use sqrt() da biblioteca <math.h>. para achar a raíz quadrada.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float distancia(float x1, float x2, float y1, float y2){
    float delta_x = x2 - x1;
    float delta_y = y2 - y1;
    float quadrado_delta_x = pow(delta_x, 2);
    float quadrado_delta_y = pow(delta_y, 2);
    float soma_quadrados = quadrado_delta_x + quadrado_delta_y;
    float distancia_euclidiana = sqrt(soma_quadrados);
    return distancia_euclidiana;
}

// Exemplo
int main(){
    float ponto1_x = 2.0;
    float ponto1_y = 4.0;
    float ponto2_x = 1.0;
    float ponto2_y = 3.0;

    float dist = distancia(ponto1_x, ponto1_y, ponto2_x, ponto2_y);

    printf("A distancia entre os pontos (%.1f, %.1f) e (%.1f, %.1f) eh de %.3f.\n", ponto1_x, ponto1_y, ponto2_x, ponto2_y, dist);

    getchar();
    return 0;
}