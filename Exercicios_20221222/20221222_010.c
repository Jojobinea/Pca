#include <stdio.h>
#include <math.h>

int main(){
    int num, aux, soma = 0, aux2 = 1, aux3 = 1;

    printf("Informe um numero: \n");
    scanf("%d", &num);

    aux = cbrt(num);
    int lista[aux-1];

    while(soma != num){
        aux3 = aux2;
        soma = 0;
        for(int i = 0; i < aux; i++){
            soma += aux3;
            lista[i] = aux3;
            aux3 += 2;
        }
        aux2 += 2;
    }

    printf("Os numeros impares consecutivos sao: ");
    for(int i = 0; i < aux; i++){
        printf("[%d] ", lista[i]);
    }

    return 0;
}