#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b, c, hip, cat1, cat2;
    printf("Digite os tres lados do triangulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a > b && a > c) {
        hip = a; cat1 = b; cat2 = c;
    } else if (b > a && b > c) {
        hip = b; cat1 = a; cat2 = c;
    } else {
        hip = c; cat1 = a; cat2 = b;
    }

    if (cat1 * cat1 + cat2 * cat2 == hip * hip) {
        printf("O triangulo e retangulo.\n");
    } else {
        printf("O triangulo nao e retangulo.\n");
    }
    
    getchar();
    return(0);
}