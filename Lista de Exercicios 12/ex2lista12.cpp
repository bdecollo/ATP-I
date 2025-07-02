#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100
#define MAX_NOME 50

struct Aluno {
    char nome[MAX_NOME];
    float nota1;
    float nota2;
};

void calcularMedia(struct Aluno lista[], int quantidade){
    for (int i = 0; i < quantidade; i++){
        float media = (lista[i].nota1 + lista[i].nota2) / 2;
        printf("Aluno: %s\n", lista[i].nome);
        printf("Media: %.2f\n\n", media);
    }
}

int main(){
    struct Aluno alunos[MAX_ALUNOS];
    int quantidade;
    
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade);
    getchar();
    
    for (int i = 0; i < quantidade; i++){
        printf("Aluno %d: ", i + 1);
        printf("Nome: ");
        fgets(alunos[i].nome, MAX_NOME, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Primeira nota: ");
        scanf("%f", &alunos[i].nota1);

        printf("Segunda nota: ");
        scanf("%f", &alunos[i].nota2);

        while (getchar() != '\n');
    }

    printf("\n--- Media dos alunos ---\n");
    calcularMedia(alunos, quantidade);

    getchar();
    return 0;
}