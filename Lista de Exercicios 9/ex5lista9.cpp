// Implemente o produto vetorial de duas matrizes 3x3.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    int B[3][3] = {
        {2, 3, 4},
        {5, 6, 7},
        {8, 9, 1},
    };
    int C[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            C[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j] + A[i][2] * B[2][j];
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}