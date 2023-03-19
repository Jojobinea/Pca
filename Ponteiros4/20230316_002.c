#include <stdio.h>
#include <stdlib.h>

int main() {
    int m = 2, n = 3;

    int* matriz = (int*) malloc(m * n * sizeof(int));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            *(matriz + i*n + j) = (i*n) + j + 1;
        }
    }

    printf("Valores usando aritmética de ponteiros:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(matriz + i*n + j));
        }
        printf("\n");
    }

    printf("Valores usando indexes:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i*n + j]);
        }
        printf("\n");
    }

    free(matriz);

    return 0;
}