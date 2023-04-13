#include <stdio.h>

void imprimirDiagonal(int matriz[2][2]) {
    printf("Diagonal principal:\n");
    for (int i = 0; i < 2; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");
}

void calcularSoma(int matrizA[2][2], int matrizB[2][2], int matrizSoma[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

int main() {
    int matrizA[2][2] = {{3, 7}, {4, 5}};
    int matrizB[2][2] = {{6, 8}, {4, 9}};
    int matrizSoma[2][2];

    imprimirDiagonal(matrizA);
    calcularSoma(matrizA, matrizB, matrizSoma);

    printf("Matriz soma:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }
    return 0;
}
