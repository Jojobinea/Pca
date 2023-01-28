#include <stdio.h>

int soma_matriz(int m1[5][3], int m2[5][3]){

    printf("\nSoma da Matrizes: :\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", m1[i][j] + m2[i][j]);
        }
        printf("\n");
    }

}

int main(){
    int m1[5][3] = {{5, 5, 5}, {4, 4, 4}, {3, 3, 3}, {2, 2, 2}, {1, 1, 1}};
    int m2[5][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}, {1, 2, 3}, {1, 2, 3}};

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

    soma_matriz(m1, m2);

    return 0;
}