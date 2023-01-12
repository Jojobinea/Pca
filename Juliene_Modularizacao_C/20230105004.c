#include <stdio.h>

int fatorial(int n){
    int fat = 1;

    for(int i = n; i >= 1; i--){
        fat *= i;
    }

    printf("Fatorial %d = %d", n, fat);
}

int main()
{
    int n;

    printf("Informe um numero:\n");
    scanf("%d", &n);

    fatorial(n);

    return 0;
}