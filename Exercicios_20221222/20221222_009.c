#include <stdio.h>

int main(){
    int m, n, auxM, auxN;
    float res, aux;

    printf("Informe um numero m:\n");
    scanf("%d", &m);
    printf("Informe um numero n: \n");
    scanf("%d", &n);

    res = 0;
    aux = res;

    for(int x = 0; x <= m; x++){

        for(int y = 0; y <= n; y++){
            res = (x * y) - (x * x) + y;

            if(res > aux){
                aux = res;
                auxM = x;
                auxN = y;
            }
        }
    }

    printf("O valor de X e = %d\n", auxM);
    printf("O valor de Y e = %d\n", auxN);
    printf("O valor do resultado final e = %.1f", aux);

    return 0;
}