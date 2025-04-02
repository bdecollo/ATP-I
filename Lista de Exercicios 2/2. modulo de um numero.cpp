#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    printf("Digite o numero: \n");
    scanf("%d", &num);

    if(num < 0){
        num = -num;
    }

    printf("O valor absoluto do numero e: %d", num);
    
    getchar();
    return(0);
}