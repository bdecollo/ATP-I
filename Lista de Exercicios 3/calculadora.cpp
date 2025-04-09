#include<stdio.h>
#include<stdlib.h>

int main(){
    int num1, num2, opcao = -1, total = 0;
    while (opcao != 0){
        printf("\n=== Escolha uma operacao ===\n");
        printf("( 1) Adicao\n");
        printf("( 2) Subtracao\n");
        printf("( 3) Multiplicacao\n");
        printf("( 4) Divisao\n");
        printf("( 0) Cancelar operacao\n");
        printf("Operacao: ");
        scanf("%d", &opcao);

        if(opcao == 0){
            printf("Operacao cancelada\n");
            break;
        }
        if (opcao >= 1 && opcao <= 4){
            printf("Digite o primeiro numero: ");
            scanf("%d", &num1);
            printf("Digite o segundo numero: ");
            scanf("%d", &num2);
        }
        if (opcao == 1){
            total = num1 + num2;
            printf("Resultado: %d\n", total);
        }
        else if (opcao == 2){
            total = num1 - num2;
            printf("Resultado: %d\n", total);
        }
        else if (opcao == 3){
            total = num1 * num2;
            printf("Resultado: %d\n", total);
        }
        else if (opcao == 4){
            if (num2 != 0){
                total = num1 / num2;
                printf("Resultado: %d\n", total);
            } 
            else {
                printf("Divisao por zero nao e permitida\n");
            }
        } 
        else {
            printf("Opcao invalida\n");
        }
    }
    getchar();
    return(0);
}