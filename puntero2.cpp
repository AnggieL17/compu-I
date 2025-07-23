#include <stdio.h> 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int filas, columnas;

    printf("Ingrese el numero de filas para la matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas para la matriz: ");
    scanf("%d", &columnas);

    int **matriz;

    matriz = (int **)malloc(filas * sizeof(int *));
    if (matriz == NULL) {
        printf("Error: No se pudo asignar memoria para las filas.\n");
        return 1;
    }

    for (int i = 0; i < filas; i++) {
        matriz[i] = (int *)malloc(columnas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Error: No se pudo asignar memoria para la fila %d.\n", i);
            for (int k = 0; k < i; k++) {
                free(matriz[k]);
            }
            free(matriz);
            return 1;
        }
    }

    printf("\nLlenando la matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = (i * columnas) + j + 1;
        }
    }

    printf("\nMatriz generada:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%4d ", *(*(matriz + i) + j));
        }
        printf("\n");
    }

    printf("\nLiberando memoria...\n");
    for (int i = 0; i < filas; i++) {
        free(matriz[i]);
    }
    free(matriz);
    printf("Memoria liberada exitosamente.\n");

    return 0;
}