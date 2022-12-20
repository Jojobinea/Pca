#include <stdio.h>

int main()
{
    int num, soma = 0;
    
    printf("Digite 5 numeros: \n");
    
    for (int i = 0; i < 5; i++){
        scanf("%d", &num);
        soma += num;
    }

    printf("A soma dos numeros informados e: %d", soma);
    
    return 0;
}
