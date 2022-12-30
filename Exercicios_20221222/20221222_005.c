#include <stdio.h>

int main(){
    int X = 1;
    float soma = 0;

    for(int i = 1; i <= 50; i++){
        soma += X/i;
        X += 2;
    }

    printf("O resultado da soma e = %.2f", soma);

    return 0;
}