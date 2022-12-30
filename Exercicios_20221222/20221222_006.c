#include <stdio.h>

int main(){
    int n, aux = 1, aux2, soma = 0;

    printf("Informe um numero: \n");
    scanf("%d", &n);

    aux2 = (n/2);

    for(aux; aux <= (aux2); aux++){
        if(n % aux == 0){
            soma += aux;
        }
    }

    if(soma == n){
        printf("O numero e perfeito");
    }else{
        printf("O numero nao e perfeito");
    }

    return 0;
}