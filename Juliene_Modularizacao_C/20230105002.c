#include <stdio.h>

int quantMeses(int p, int s){
    float meses;
    meses = s / 4;

    if(p < 100){
        printf("\nParto nao devera ser realizado, reavaliar clinicamente\n");
    }else{
        if(p > 2500 && meses > 7) {
            printf("\nParto Normal\n");
        }else if(p > 2500 && meses <= 7){
            printf("\nParto Cesariana\n");
        }else if(2000 >= p || p >= 1500 && meses > 9){
            printf("\nParto Normal\n");
        }else{
            printf("\nParto Cesariana\n");
        }
    }
}

int lerPeso(){
    int peso, semanas;

    printf("Informe o peso do feto em gramas:\n");
    scanf("%d", &peso);
    printf("Informe a quantidade de semanas de gestacao:\n");
    scanf("%d", &semanas);

    quantMeses(peso, semanas);
}

int main()
{
    lerPeso();
    return 0;
}