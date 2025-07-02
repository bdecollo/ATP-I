#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    float notaP1;
    float notaP2;
    float notaExercicios;
} Aluno;

float calcularMediaFinal(Aluno a){
    float mediaProvas = (a.notaP1 * 4 + a.notaP2 * 6) / 10;
    float mediaGeral = (a.notaExercicios * 0.2) + (mediaProvas * 0.8);
    return mediaGeral;
}

int main(){
    Aluno aluno;
   
    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
   
    printf("Digite a nota da P1 do aluno: ");
    scanf("%f", &aluno.notaP1);
   
    printf("Digite a nota da P2 do aluno: ");
    scanf("%f", &aluno.notaP2);
   
    printf("Digite a nota dos exercicios do aluno: ");
    scanf("%f", &aluno.notaExercicios);
   
    float media = calcularMediaFinal(aluno);
   
    printf("Media final do aluno %s = %.2f\n", aluno.nome, media);
   
    getchar();
    return 0;
}