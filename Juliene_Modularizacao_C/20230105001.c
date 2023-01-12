#include <stdio.h>
#include <stdlib.h>

int absdif(){
    float n1, n2;
    int absol;

    printf("\nInforme um numero real:\n");
    scanf("%f", &n1);
    printf("Informe outro numero real:\n");
    scanf("%f", &n2);

    absol = abs(n1 - n2);

    printf("\nO valor absoluto de %.1f - %.1f = %d\n", n1, n2, absol);
}

int percentual(int val, int total){
    float perc;

    perc = 100 * val / total;

    printf("\n%d = %.1f%% de %d\n", val, perc, total);
}

int scanIntIntervalo(){
    int num;

    printf("Informe um numero entre 0 e 1000:\n");

    do{
        scanf("%d", &num);
        if(0 > num || num > 1000)
            printf("\nValor invalido. Digite novamente\n");
    }while(0 > num || num > 1000);

    return num;
}

int main()
{
    int x, y, maior, menor;
    float pxy, pyx;

    x = scanIntIntervalo();
    y = scanIntIntervalo();

    if(x > y){
        maior = x;
        menor = y;
    }else{
        maior = y;
        menor = x;
    }

    printf("\nO maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);

    pxy = percentual(menor, maior);

    absdif();

    return 0;
}