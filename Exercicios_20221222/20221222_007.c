#include <stdio.h>

int main(){
    float massa_inicial, massa_final;
    int cont = 0, seg_total, horas, min, segs, resto;

    printf("Informe a massa do material: \n");
    scanf("%f", &massa_inicial);
    massa_final = massa_inicial;

    while(massa_final >= 0.5){
        massa_final = massa_final/2;
        cont += 1;
    }

    seg_total = 50 * cont;
    horas = seg_total/3600;
    resto = seg_total % 3600;
    min = resto / 60;
    segs = resto % 60;

    printf("Massa Inicial: %.3f\n", massa_inicial);
    printf("Massa Final: %.3f\n", massa_final);
    printf("Tempo Total: %d h :%d min :%d segs", horas, min, segs);

    return 0;
}