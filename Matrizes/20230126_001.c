#include <stdio.h>

int main(){
    int m1[3][5], m2[3][5];

    printf("Informe os valores da primeira matriz: \n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Informe os valores da segunda matriz: \n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &m2[i][j]);
        }
    }

    printf("\nMatriz 1:\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 2:\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma da Matrizes: :\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", m1[i][j] + m2[i][j]);
        }
        printf("\n");
    }
    return 0;
}