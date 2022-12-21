#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    float media_maior, nota1_maior, nota2_maior, nota3_maior;
    float media_menor, nota1_menor, nota2_menor, nota3_menor;
    int aux = 0;
    char co;

    do{
        printf("Informe a nota do Exercicio 1:\n");
        scanf("%f", &nota1);
        printf("Informe a nota do Exercicio 2:\n");
        scanf("%f", &nota2);
        printf("Informe a nota do Exercicio 3:\n");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        if (aux == 0) {
            media_maior = media;
            media_menor = media;

            nota1_maior = nota1;
            nota1_menor = nota1;

            nota2_maior = nota2;
            nota2_menor = nota2;

            nota3_maior = nota3;
            nota3_menor = nota3;
        }else{
            if(media_maior < media)
                media_maior = media;
            else if(media_menor > media)
                media_menor = media;

            if(nota1_maior < nota1)
                nota1_maior = nota1;
            else if(nota1_menor > nota1)
                nota1_menor = nota1;

            if(nota2_maior < nota2)
                nota2_maior = nota2;
            else if(nota2_menor > nota2)
                nota2_menor = nota2;

            if(nota3_maior < nota3)
                nota3_maior = nota3;
            else if(nota3_menor > nota3)
                nota3_menor = nota3;
        }

        aux = 1;

        printf("Deseja informar as notas de outro aluno? Responda com S para sim e N para nao\n");
        scanf("%s", &co);

    }while(co == 'S' || co == 's');

    printf("\n\nMaior nota do Exercicio 1: %.1f\n", nota1_maior);
    printf("Menor nota do Exercicio 1: %.1f\n", nota1_menor);

    printf("\nMaior nota do Exercicio 2: %.1f\n", nota2_maior);
    printf("Menor nota do Exercicio 2: %.1f\n", nota2_menor);

    printf("\nMaior nota do Exercicio 3: %.1f\n", nota3_maior);
    printf("Menor nota do Exercicio 3: %.1f\n", nota3_menor);

    printf("\nMaior media dos alunos informada: %.1f\n", media_maior);
    printf("Menor media dos alunos informada: %.1f\n", media_menor);

}
