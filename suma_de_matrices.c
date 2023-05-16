#include <stdio.h>
//añadimos typedef para agregar el alias Matrix
typedef int Matrix[100][100];

void sumarMatrices(Matrix matrizp, Matrix matrizs, int filas, int columnas, Matrix resultados) {
    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= columnas; j++) {
            resultados[i][j] = matrizp[i][j] + matrizs[i][j];
        }
    }
}

void mostrarMatriz(Matrix matrices, int filas, int columnas) {
    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= columnas; j++) {
            printf("%d ", matrices[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[]) {
    Matrix matrizp, matrizs, resultados;
    int filas, columnas;

    printf("Ingrese el número de filas de las matrices: ");
    scanf("%d", &filas);

    printf("Ingrese el número de columnas de las matrices: ");
    scanf("%d", &columnas);

    printf("Ingrese los elementos de la matriz 1:\n");
    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= columnas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizp[i][j]);
        }
    }

    printf("Ingrese los elementos de la matriz 2:\n");
    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= columnas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizs[i][j]);
        }
    }

    sumarMatrices(matrizp, matrizs, filas, columnas, resultados);

    printf("La suma de las matrices es:\n");
    mostrarMatriz(resultados, filas, columnas);

    return 0;
}