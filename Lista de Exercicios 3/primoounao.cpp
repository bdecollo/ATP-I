#include<stdio.h>
#include<stdlib.h>

int main(){
    int num, i, primo = 1;
    printf("Entrada: ");
    scanf("%d", &num);
    if (num < 2){
        primo = 0;
    } 
    else {
        for (i = 2; i <= num / 2; i++){
            if (num % i == 0){
                primo = 0;
                break;
            }
        }
    }
    if(primo == 0){
        printf("O numero %d nao e primo\n", num);
    } 
    else {
        printf("O numero %d e primo\n", num);
    }
    getchar();
    return(0);
}