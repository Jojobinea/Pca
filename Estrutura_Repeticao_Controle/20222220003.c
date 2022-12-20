#include <stdio.h>

int main()
{
    int num, soma = 0;
    
    printf("Digite 50 numeros: \n");
    
    for (int i = 0; i < 50; i++){
        scanf("%d", &num);
        
        if (num % 2 != 0 && num <= 200 && num >= 100){
            soma += num;
        }
    }

    printf("A soma dos numeros impares maiores que 100 e menores que 200 informados e: %d", soma);
    
    return 0;
}
