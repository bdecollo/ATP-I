// Crie uma função calcula_imc() que recebe peso (kg) e altura (m) e retorna um inteiro ao depender do Índice de Massa Corporal. 
// Classifique o resultado:

// Abaixo de 18.5 → Magreza: 0
// 18.5–24.9 → Saudável: 1
// 25.0–29.9 → Sobrepeso: 2
// Acima de 30.0 → Obesidade: 3

// Faça uma segunda função imprima_imc()que chame a primeira e imprima o resultado por escrito.
// IMC = peso/altura^2

#include <stdio.h>
#include <stdlib.h>

int calcula_imc(float peso, float altura){
    float imc = peso / (altura * altura);
    if (imc < 18.5) return 0;
    if (imc <= 24.9) return 1;
    if (imc <= 29.9) return 2;
    return 3;
}

void imprima_imc(float peso, float altura){
    int resultado = calcula_imc(peso, altura);
    if (resultado == 0){
        printf("Magreza.\n");
    }
    else if (resultado == 1){
        printf("Saudavel.\n");
    }
    else if (resultado == 2){
        printf("Sobrepeso.\n");
    }
    else if (resultado == 3){
        printf("Obesidade.\n");
    }
    else {
        printf("Classificacao invalida.\n");
    }
}

int main(){
    float peso, altura;
    
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    imprima_imc(peso, altura);

    getchar();
    getchar();
    return 0;
}