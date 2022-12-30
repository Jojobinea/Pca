#include <stdio.h>
#include <math.h>

int main(){
    float X1, X2;
    int Y;

    printf("Informe um numero: \n");
    scanf("%d", &Y);

    X1 = Y/2;
    X2 = X1;
    X1 = X1 - ((X1 * X1) - Y)/(2 * X1);

    while(fabs(X1 - X2) >= 0.1){
        X2 = X1;
        X1 = X1 - ((X1 * X1) - Y)/(2 * X1);
    };

    printf("X = %.2f\n", X1);
    printf("Y = %.2f", sqrt(Y));

    return 0;
}