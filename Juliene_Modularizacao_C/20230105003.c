#include <stdio.h>

int num_Perfeito(int num){
    int soma = 0;

    for(int i = 1; i <= num/2; i++){
        if(num % i == 0)
            soma += i;
    }

    if(soma == num)
        printf("\n%d e um numero perfeito\n", num);
    else
        printf("\n%d nao e um numero perfeito\n", num);

}

int inf_Num(){
    int num;

    do{
        printf("\nInforme um numero par:\n");
        scanf("%d", &num);

        if(num % 2 != 0)
            printf("\nNumero invalido! Digite um numero PAR\n");

    }while (num % 2 != 0);

    num_Perfeito(num);
}

int main()
{
    inf_Num();

    return 0;
}