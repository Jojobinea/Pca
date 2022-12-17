#include <stdio.h>

int main()
{
    int n1, n2;
    float nr, produto, soma, cubo;
    
    printf("Informe um numero inteiro: ");
    scanf("%d", &n1);
    printf("Informe outro numero inteiro: ");
    scanf("%d", &n2);
    printf("Informe um umero real: ");
    scanf("%f", &nr);
    
    produto = (n1 * 2) * (n2 / 2);
    soma = (n1 * 3) + nr;
    cubo = nr * nr * nr;
    
    printf("Prooduto do dobro do primeiro numero com metade do segundo numero = %.2f \n", produto);
    printf("Soma do triplo do primeiro numero com o terceiro = %.2f \n", soma);
    printf("Terceiro numero elevado ao cubo = %.2f", cubo);
    
    
    return 0;
}
