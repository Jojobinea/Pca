#include <stdio.h>

int main()
{
    float F, C;
    
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &F);
    
    C = (F - 32) / 1.8;
    
    printf("A temperatura em Celcius e: %.1f", C);
    
    return 0;
}
