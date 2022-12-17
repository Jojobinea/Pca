#include <stdio.h>

int main()
{
    float val_horas, sal, salario_final, imp_renda, inss, sind;
    int num_horas;
    
    printf("Informe o valor ganhado por hora trabalhada: ");
    scanf("%f", &val_horas);
    printf("Informe o numero de horas trabalhadas neste mes: ");
    scanf("%d", &num_horas);
    
    sal = (val_horas * num_horas);
    
    imp_renda = (sal / 100) * 11;
    inss = (sal / 100) * 8;
    sind = (sal / 100) * 5;
    
    salario_final = sal - imp_renda - inss - sind;
    
    printf("Salario Bruto: R$ %.2f \n", sal);
    printf("Valor do imposto de renda: R$ %.2f \n", imp_renda);
    printf("Valor do imposto de INSS: R$ %.2f \n", inss);
    printf("Valor do imposto do Sindicato: R$ %.2f \n", sind);
    printf("Salario liquido: R$ %.2f", salario_final);
    return 0;
}
