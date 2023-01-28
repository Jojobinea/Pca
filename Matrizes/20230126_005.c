#include <stdio.h>

int diagonal_matriz(int m[5][5]){
    int j = 0;

    printf("\nDiagonal:\n ");
    for(int i = 0; i < 5; i++){
        printf("%d\n", m[i][j]);
        j++;
        for(int a = 0; a <= j; a++)
            printf(" ");
    }
}

int main(){
    int m[5][5] = {{5, 4, 1, 3, 2}, {2, 6, 4, 8, 9}, {5, 2, 6, 7, 1}, {3, 5, 7, 3, 1}, {8, 2, 8, 2, 5}};

    printf("\nMatriz:\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    diagonal_matriz(m);

    return 0;
}