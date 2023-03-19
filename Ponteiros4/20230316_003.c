#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;

    printf("Informe as dimensoes das matrizes (m n): ");
    scanf("%d %d", &m, &n);

    double** matriz1 = (double**) malloc(m * sizeof(double*));
    for (int i = 0; i < m; i++) {
        matriz1[i] = (double*) malloc(n * sizeof(double));
    }

    double** matriz2 = (double**) malloc(m * sizeof(double*));
    for (int i = 0; i < m; i++) {
        matriz2[i] = (double*) malloc(n * sizeof(double));
    }

    printf("Informe os valores da primeira matriz:\n");
    for (int i = 0; i < m; i++) {
        printf("Linha %d:\n", i+1);
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matriz1[i][j]);
        }
    }

    printf("Informe os valores da segunda matriz:\n");
    for (int i = 0; i < m; i++) {
        printf("Linha %d:\n", i+1);
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matriz2[i][j]);
        }
    }

    double** matriz_soma = (double**) malloc(m * sizeof(double*));
    if (matriz_soma == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
    for (int i = 0; i < m; i++) {
        matriz_soma[i] = (double*) malloc(n * sizeof(double));
        if (matriz_soma[i] == NULL) {
            printf("Erro ao alocar memória!\n");
            exit(1);
        }
        for (int j = 0; j < n; j++) {
            matriz_soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Impressão da matriz resultante
    printf("Matriz soma:\n");
    for (int i = 0; i < m; i++) {
        printf("Linha %d:\n", i+1);
        for (int j = 0; j < n; j++) {
            printf("%.2lf ", matriz_soma[i][j]);
        }
        printf("\n");
    }
}
