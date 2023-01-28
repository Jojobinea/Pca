#include <stdio.h>

void multiplica_matriz(int m[3][3], int k){

    printf("\nMultiplicacao da Matriz:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", m[i][j] * k);
        }
        printf("\n");
    }
}

int main(){
    int m[3][3];
    int k;

    printf("Informe um valor escalar: ");
    scanf("%d", &k);

    printf("\nInforme os valores da Matriz:\n");

    for(int i = 0; i < 3; i++){
        printf("Linha %d:\n", i+1);
        for(int j = 0; j < 3; j++){
            scanf("%d", &m[i][j]);
        }
    }


    multiplica_matriz(m, k);

    return 0;
}