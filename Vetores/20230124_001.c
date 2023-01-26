#include <stdio.h>

int main(){
    int quant;
    do {
        printf("Informe a quantidade de numeros a serem informados (maximo de 100 numeros): ");
        scanf("%d", &quant);

        if(quant > 100 || quant < 0)
            printf("Numero Invalido! Informe outro valor:\n");
    } while (quant > 100 || quant < 0);

    int n[quant];

    for(int i = 0; i < quant; i++){
        do {
            printf("Informe um numero: ");
            scanf("%d", &n[i]);

            if(n[i] > 100)
                printf("\nNumero invalido! Informe outro numero menor que 100\n");

        } while (n[i] > 100);
    }

    printf("\n\n Os valores informados, ao contrario,  foram:\n");
    for (int i = quant - 1; i >= 0; i-- ){
        printf("%d ", n[i]);
    }
    return 0;
}