#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura, area;

    printf("Valor da Base: ");
    scanf("%f", &base);
    printf("Valor da Altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A area do triangulo e: %.1f", area);
    
    return 0;
}
