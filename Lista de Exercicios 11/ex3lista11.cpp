#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NUM_CARTELAS 5

void embaralhar(int *array, int tamanho){
    for (int i = tamanho - 1; i > 0; i--){
        int j = rand() % (i + 1);
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

void gerar_cartela(int cartela[5][5]){
    int base = 1;
    for (int col = 0; col < 5; col++){
        int numeros[15];
        for (int i = 0; i < 15; i++){
            numeros[i] = base + i;
        }

        embaralhar(numeros, 15);

        for (int lin = 0; lin < 5; lin++) {
            if (col == 2 && lin == 2){
                cartela[lin][col] = -1;
            } else {
                cartela[lin][col] = numeros[lin];
            }
        }
        base += 15;
    }
}

void salvar_csv(int quantidade) {
    FILE *arquivo = fopen("bingo.csv", "w");
    if (!arquivo) {
        printf("Erro ao criar arquivo.\n");
        return;
    }

    fprintf(arquivo, "B1,B2,B3,B4,B5,I1,I2,I3,I4,I5,N1,N2,N3,N4,N5,G1,G2,G3,G4,G5,O1,O2,O3,O4,O5\n");

    for (int c = 0; c < quantidade; c++) {
        int cartela[5][5];
        gerar_cartela(cartela);

        for (int lin = 0; lin < 5; lin++) {
            for (int col = 0; col < 5; col++) {
                if (col == 2 && lin == 2) {
                    fprintf(arquivo, "FREE");
                } else {
                    fprintf(arquivo, "%d", cartela[lin][col]);
                }

                if (col != 4 || lin != 4)
                    fprintf(arquivo, ",");
            }
        }
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);
    printf("Cartelas geradas com sucesso no arquivo bingo.csv.\n");
}

int main() {
    srand(time(NULL));
    salvar_csv(NUM_CARTELAS);

    getchar();
    return 0;
}