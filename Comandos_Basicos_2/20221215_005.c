#include <stdio.h>

int main()
{
    float lado, area;
    
    printf("Informe o valor do lado de um quadrado: ");
    scanf("%f", &lado);
    
    area = lado * lado;
    
    printf("O dobro da area do quadrado e: %.2f", area * 2);
    
    return 0;
}
