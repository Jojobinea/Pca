#include <stdio.h>

int main(){
    int n, flag, a, b, c = 1;

    printf("Informe um numero inteiro positivo:\n");
    scanf("%d", &n);

    printf("Hipotenusas entre 1 e N:\n");

    for(c; c <= n; c++){
        flag = 0;

        for(a = 0; a < c; a++){
            for(b = 0; b < a; b++){
                if((c * c) == ((a * a) + (b * b)))
                    flag = 1;
            }
        }

        if(flag == 1)
            printf("%d\n", c);
    }
}