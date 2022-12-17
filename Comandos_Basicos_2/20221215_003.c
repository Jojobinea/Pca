#include <stdio.h>

int main()
{
    float m, cm;
    
    printf("Informe o valor do metro: ");
    scanf("%f", &m);
    
    cm = m * 100;
    
    printf("O valor do Metro em Centimetros e: %.1f", cm);
    
    return 0;
}
