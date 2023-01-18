#include <stdio.h>

int main(){
    float nota, soma = 0, media, maior, menor;
    int cont = 0;

    do {
        printf("\nInforme uma nota:\n");
        scanf("%f", &nota);

        if(cont == 0){
            maior = nota;
            menor = nota;
        }

        if(nota >= 0) {
            soma += nota;
            cont++;

            if (nota >= maior)
                maior = nota;
            else if (nota <= menor)
                menor = nota;
        }
    } while (nota >= 0);

    media = soma / cont;
    printf("\nA menor nota e: %.1f\n", menor);
    printf("A maior nota e: %.1f\n", maior);
    printf("A media Aritmetica das notas informadas e: %.1f", media);

    return 0;
}