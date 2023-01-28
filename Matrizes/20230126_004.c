#include <stdio.h>

void procura_matriz(int m[3][3], int x){
    int aux = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(m[i][j] == x) {
                printf("\nO valor %d esta na linha %d, coluna %d", x, i+1, j+1);
                aux = 1;
            }
        }
    }
    if(aux == 0)
        printf("\nValor nao encontrado");
}

int main(){
    int m[3][3];
    int X;

    printf("\nInforme os valores da Matriz:\n");

    for(int i = 0; i < 3; i++){
        printf("Linha %d:\n", i+1);
        for(int j = 0; j < 3; j++){
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nInforme o valor a ser achado dentro da Matriz:\n");
    scanf("%d", &X);

    procura_matriz(m, X);

    return 0;
}