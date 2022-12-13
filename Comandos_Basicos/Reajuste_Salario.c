#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, nov_sal;

    printf("Informe o salario: ");
    scanf("%f", &sal);
    
    nov_sal = sal + (sal / 100)*10;

    printf("O valor do salario rajustado e:  R$ %.2f", nov_sal);
    
    return 0;
}
