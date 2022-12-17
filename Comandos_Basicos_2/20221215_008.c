#include <stdio.h>

int main()
{
    float F, C;
    
    printf("Informe a temperatura em Celcius: ");
    scanf("%f", &F);
    
    C = (F  * 1.8) + 32;
    
    printf("A temperatura em Fahrenheit e: %.1f", C);
    
    return 0;
}
