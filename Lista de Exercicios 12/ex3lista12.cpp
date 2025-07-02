#include <stdio.h>
#include <stdlib.h>

typedef struct Matriz {
    int linha;
    int coluna;
    int** matriz;
    struct Matriz *proximo; 
} Matriz;

int main(){
    getchar();
    return 0;
}