#include <stdio.h>
#include <math.h>

int print_result(float x, float arctg){
    printf("\nNumero real = %.4lf\n", x);
    printf("\nArco Tangente = %.4lf\n", arctg);
}

double arctan(double x){
    float soma = x;
    int aux = 1, aux2 = 3;

    do{
        if(aux %2 == 0 && fabsf(pow(x, aux2) / aux2) >= 0.0001){
            soma += pow(x, aux2) / aux2;
        }
        else if(aux %2 != 0 && fabsf(pow(x, aux2) / aux2) >= 0.0001){
            soma -= pow(x, aux2) / aux2;
        }

        aux++;
        aux2 += 2;
    }while(fabsf(pow(x, aux2) / aux2) >= 0.0001);

    return soma;
}

double inf_num(){
    double num;

    do{
        printf("Informe um numero inteiro positivo antre 1 e 0:\n");
        scanf("%lf", &num);

        if(num < 0 || num > 1)
            printf("Numero Invalido! Informe outro valor.\n");
    }while(num < 0 || num > 1);

    return num;
}

int main(){
    double num, arctg;

    num = inf_num();
    arctg = arctan(num);
    print_result(num, arctg);

    return 0;
}