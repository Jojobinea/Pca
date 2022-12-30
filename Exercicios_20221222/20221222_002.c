#include <stdio.h>

int main(){
    float num, maior, menor;

    for(int i = 0; i < 15; i++){
        printf("Informe um numero: \n");
        scanf("%f", &num);

        if(i == 0) {
            maior = num;
            menor = num;
        } else if (maior<num)
            maior = num;
        else if (menor > num)
            menor = num;
    }

    printf("O menor numero informado e: %.2f\n", menor);
    printf("O maior numero informado e: %.2f\n", maior);

    return 0;
}