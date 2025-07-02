#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITENS 100
#define MAX_NOME 50

typedef struct {
    char nome[MAX_NOME];
    float preco;
} Produto;

typedef struct {
    Produto itens[MAX_ITENS];
    int quantidade;
} Menu;

Produto inicializarProduto(const char* nome_produto, float preco_produto){
    Produto novo_produto;
    strncpy(novo_produto.nome, nome_produto, MAX_NOME - 1);
    novo_produto.nome[MAX_NOME - 1] = '\0';
    novo_produto.preco = preco_produto;
    return novo_produto;
}

int main(){
    FILE *menuFile = fopen("menu.txt", "r");
    if (menuFile == NULL) {
        printf("Erro ao abrir menu.txt\n");
        return 1;
    }

    Menu meu_menu;
    meu_menu.quantidade = 0;

    fscanf(menuFile, "%d", &meu_menu.quantidade);

    for (int i = 0; i < meu_menu.quantidade; i++) {
        char nome_temp[MAX_NOME];
        float preco_temp;
        fscanf(menuFile, "%s %f", nome_temp, &preco_temp);
 
        meu_menu.itens[i] = inicializarProduto(nome_temp, preco_temp);
    }

    fclose(menuFile);

    FILE *boletoFile = fopen("boleto.txt", "w");
    if (boletoFile == NULL) {
        printf("Erro ao criar boleto.txt\n");
        return 1;
    }

    int opcao, quantidade;
    float total = 0;

    fprintf(boletoFile, "Boleto - Pedido da Lanchonete\n\n");

    do {
        printf("\nMenu:\n");
        for (int i = 0; i < meu_menu.quantidade; i++) {
            printf("%d - %s: R$ %.2f\n", i + 1, meu_menu.itens[i].nome, meu_menu.itens[i].preco);
        }
        printf("0 - Finalizar pedido\n");

        printf("Escolha o item pelo numero: ");
        scanf("%d", &opcao);

        if (opcao > 0 && opcao <= meu_menu.quantidade) {
            printf("Quantidade de %s: ", meu_menu.itens[opcao - 1].nome);
            scanf("%d", &quantidade);

            float subtotal = meu_menu.itens[opcao - 1].preco * quantidade;
            total += subtotal;

            fprintf(boletoFile, "%s x%d = R$ %.2f\n", meu_menu.itens[opcao - 1].nome, quantidade, subtotal);

        } else if (opcao != 0) {
            printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 0);

    fprintf(boletoFile, "\nTotal a pagar: R$ %.2f\n", total);

    fclose(boletoFile);

    printf("Pedido finalizado. Boleto gerado em boleto.txt\n");

    getchar(); 
    getchar();
    return 0;
}