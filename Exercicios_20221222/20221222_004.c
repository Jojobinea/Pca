#include <stdio.h>

int main(){
    int num, cont = 0, aux = 1;

    printf("Informe um numero: \n");
    scanf("%d", &num);

    for(aux; aux <= (num/2); aux++){
        if(num % aux == 0){
            cont++;
        }
    }

    if(cont == 1){
        printf("%d e um numero primo", num);
    }else{
        printf("%d nao e um numero primo", num);
    }

    return 0;
}