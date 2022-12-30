#include <stdio.h>

int main(){
    int num = 0, pares = 0, impares = 0;

    while(num <= 1000){
        printf("Informe um numero:\n");
        scanf("%d", &num);

        if(num > 1000)
            break;
        else if(num % 2 == 0)
            pares += num;
        else if(num % 2 != 0)
            impares += num;
    }

    printf("Soma dos numeros pares = %d\n", pares);
    printf("Soma dos numeros impares = %d\n", impares);

    return 0;
}