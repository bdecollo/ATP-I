#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if(num > 0){
        printf("O numero e positivo");
    }
    if(num < 0){
        printf("O numero e negativo");
    }
    if(num == 0){
        printf("O numero e neutro");
    }
    
    getchar();
    return(0);
}