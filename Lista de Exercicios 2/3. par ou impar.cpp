#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if(numero % 2){
        printf("O numero e impar.");
    }else{
        printf("O numero e par.");
    }
    
    getchar();
    return(0);
}