
#include <stdio.h>

int main(){
    int m1[5][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}, {4, 4, 4}, {5, 5, 5}};
    int m2[5][3] = {{6, 6, 6}, {7, 7, 7}, {8, 8, 8}, {9, 9, 9}, {10, 10, 10}};

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
