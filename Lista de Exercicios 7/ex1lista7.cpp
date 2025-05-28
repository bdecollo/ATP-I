/* Escreva um programa que receba uma string e imprime a primeira letra pela no formato:
<palavra> comeca com <letra> */

#include <stdio.h>

int main(){
    char palavra[100];
    
    printf("Digite uma palavra: ");
    
    if (scanf("%99s", palavra) == 1)
        printf("%s comeca com %c\n", palavra, palavra[0]);
    else {
        printf("Nenhuma palavra foi digitada.\n");
    }

    getchar();
    return 0;
}