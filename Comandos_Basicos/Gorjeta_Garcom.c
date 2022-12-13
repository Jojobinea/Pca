#include <stdio.h>
#include <stdlib.h>

int main()
{
    float conta, gorjeta;

    printf("Informe o valor da conta: ");
    scanf("%f", &conta);
    
    gorjeta = (conta / 100)*10;

    printf("O valor recebido pelo garcom sera de:  R$ %.2f", gorjeta);
    
    return 0;
}
