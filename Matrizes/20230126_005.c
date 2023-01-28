#include <stdio.h>


void tudo_menos_principal(int m[5][5]){

    printf("\nTudo menos a diagonal principal:\n ");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if (i != j)
                printf("%d ", m[i][j]);
            else
                printf("- ");
        }
        printf("\n");
    }
}

void soma_coluna_2(int m[5][5]){
    int soma = 0;

    for(int i = 0; i < 5; i++){
        soma += m[i][1];
    }

    printf("\nSoma da coluna 2 = %d\n", soma);
}

void soma_linha_4(int m[5][5]){
    int soma = 0;

    for(int i = 0; i < 5; i++){
        soma += m[3][i];
    }

    printf("\nSoma da linha 4 = %d\n", soma);
}

void diagonal_matriz_secundaria(int m[5][5]){
    int j = 4;

    printf("\nDiagonal Secundaria:\n");
    for(int i = 0; i < 5; i++){
        for(int a = 0; a <= j; a++)
            printf(" ");
        printf("%d\n", m[i][j]);
        j--;
    }
}

void diagonal_matriz_primaria(int m[5][5]){
    int j = 0;

    printf("\nDiagonal Principal:\n ");
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

    diagonal_matriz_primaria(m);
    diagonal_matriz_secundaria(m);
    soma_linha_4(m);
    soma_coluna_2(m);
    tudo_menos_principal(m);

    return 0;
}