#include<stdio.h>
#include<stdlib.h>

int main(){
    int idade, servicos;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu tempo de servico: ");
    scanf("%d", &servicos);
    
    if(idade >= 65){
        printf("Voce pode se aposentar.");
    }
    else if(servicos >= 30){
        printf("Voce pode se aposentar.");
    }
    else if(idade >= 60 && servicos >= 25){
        printf("Voce pode se aposentar.");
    }else{
        printf("Voce nao pode se aposentar.");
    }
    
    getchar();
    return(0);
}