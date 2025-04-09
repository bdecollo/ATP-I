#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i;
    long long termo_anterior = 0, termo_atual = 1, proximo_termo;
        
    printf("Digite o valor de n (quantidade de termos da sequencia de Fibonacci): ");
    if (scanf("%d", &n) != 1){
        printf("Valor invalido. Insira um numero inteiro.\n");
        return 1;
    }
        
    if (n <= 0){
        printf("n deve ser um numero positivo maior que zero.\n");
        return 1;
    }
    printf("Sequencia de Fibonacci ate o %d termo:\n", n);
        
    for (i = 1; i <= n; i++) {
        if (i == 1){
            printf("%lld", termo_anterior);
        } 
        else if (i == 2){
            printf(", %lld", termo_atual);
        } 
        else {
            proximo_termo = termo_anterior + termo_atual;
            printf(", %lld", proximo_termo);
            termo_anterior = termo_atual;
            termo_atual = proximo_termo;
        }
    }
    printf("\n");
    getchar();
    return(0);
}