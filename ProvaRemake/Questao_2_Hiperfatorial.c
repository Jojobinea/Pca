#include <stdio.h>
#include <math.h>

int hiperfatorial(int n){
    int fat = 0;

    for(int c=0;c<=n;c++){
        fat += pow(c,c);
    }

    return fat;
}

void print_result(int num){
    printf("Numero inserido: %d\n", num);
    printf("Hiperfatorial do numero: %d\n", hiperfatorial(num));
}

int inf_num(){
    int num;

    do{
        printf("Informe um numero inteiro positivo:\n");
        scanf("%d", &num);
        if(num < 0)
            printf("Numero Invalido! Informe outro valor.:\n");

    }while(num < 0);

    print_result(num);
}

int main(){
    inf_num();

    return 0;
}