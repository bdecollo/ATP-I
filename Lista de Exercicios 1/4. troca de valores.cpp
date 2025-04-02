#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, temp;
    
    printf("Digite o valor de b: ");
    scanf("%d", &a);
    printf("Digite o valor de a: ");
    scanf("%d", &b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("Após a troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    getchar();
    return(0);
}