#include <stdio.h>
#include <stdlib.h>

#define MAX_ITENS 100
#define MAX_NOME 50

int main() {
    FILE *menuFile = fopen("menu.txt", "r");
    if (menuFile == NULL){
        printf("Erro ao abrir menu.txt\n");
        return 1;
    }

    int n;
    fscanf(menuFile, "%d", &n);

    char nomes[MAX_ITENS][MAX_NOME];
    float precos[MAX_ITENS];

    for (int i = 0; i < n; i++){
        fscanf(menuFile, "%s %f", nomes[i], &precos[i]);
    }

    fclose(menuFile);

    FILE *boletoFile = fopen("boleto.txt", "w");
    if (boletoFile == NULL){
        printf("Erro ao criar boleto.txt\n");
        return 1;
    }

    int opcao, quantidade;
    float total = 0;

    fprintf(boletoFile, "Boleto - Pedido da Lanchonete\n\n");

    do {
        printf("\nMenu:\n");
        for (int i = 0; i < n; i++){
            printf("%d - %s: R$ %.2f\n", i+1, nomes[i], precos[i]);
        }
        printf("0 - Finalizar pedido\n");

        printf("Escolha o item pelo numero: ");
        scanf("%d", &opcao);

        if (opcao > 0 && opcao <= n){
            printf("Quantidade de %s: ", nomes[opcao - 1]);
            scanf("%d", &quantidade);

            float subtotal = precos[opcao - 1] * quantidade;
            total += subtotal;

            fprintf(boletoFile, "%s x%d = R$ %.2f\n", nomes[opcao - 1], quantidade, subtotal);

        } else if (opcao != 0){
            printf("Opçao invalida. Tente novamente.\n");
        }

    } while (opcao != 0);

    fprintf(boletoFile, "\nTotal a pagar: R$ %.2f\n", total);

    fclose(boletoFile);

    printf("Pedido finalizado. Boleto gerado em boleto.txt\n");

    getchar();
    return 0;
}