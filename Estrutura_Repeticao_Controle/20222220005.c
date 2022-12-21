#include <stdio.h>

int main()
{
    int num, maior, menor;

    printf("Digite 20 numeros: \n");

    for (int i = 0; i < 5; i++){
        scanf("%d", &num);

        if (num >= 0){

            if (i == 0){
                maior = num;
                menor = num;
            }else{
                if (num >= maior){
                    maior = num;
                }else if (num <= menor){
                    menor = num;
                }
            }

        }else{
            printf("Numero invalido, digite um numero maior ou igual a zero\n");
            i--;
        }


    }

    printf("O maoir numero informado e: %d \n", maior);
    printf("O menor numero informado e: %d", menor);

    return 0;
}