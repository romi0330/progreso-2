#include <stdio.h>

int main (int argc, char *argv[]) {
    
    int num1,num2;
    printf("Ingrese numero de columnas: \n");
    scanf("%d", &num1);
    printf("Ingrese numero de filas: \n");
    scanf("%d", &num2);
    int matriz[num1][num2];
    memset(matriz, 0, sizeof(matriz));

    for (int i = 0; i < num2; i++) {
        for (int j = 0; j < num1; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (int i = 0; i < num2; i++) {
        for (int j = 0; j < num1; j++)
        {
            matriz[i][i]=1;
        printf("%d ", matriz[i][j]);
        }
        printf("\n");
        
    }
    


    return 0;
}