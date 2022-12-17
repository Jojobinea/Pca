#include <stdio.h>

int main()
{
    float valor_hora, total;
    int horas;
    
    printf("Informe o valor ganhado por hora trabalhada: ");
    scanf("%f", &valor_hora);
    printf("Informe o numero de horas trabalhadas: ");
    scanf("%d", &horas);
    
    total = valor_hora * horas;
    
    printf("O valor total do salario e de: R$ %.2f", total);
    
    return 0;
}
