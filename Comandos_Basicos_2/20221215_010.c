#include <stdio.h>

int main()
{
    float altura, peso_ideal;
    
    printf("Informe a altura de uma pessoa: ");
    scanf("%f", &altura);
    
    peso_ideal = (72.7 * altura) - 58;
    
    printf("O peso ideal para esta pessoa deve ser de: %.2f", peso_ideal);
    
    return 0;
}
