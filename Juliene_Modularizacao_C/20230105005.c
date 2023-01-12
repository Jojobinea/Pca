#include <stdio.h>

int fibonacci(int n){
    int f1 = 1, f2 = 0, fn;

    if(n == 1 || n == 2)
        fn = 1;
    else
        for(int i = 1; i <= n; i++){
            fn = f1 + f2;;
            f1 = f2;
            f2 = fn;
        }

    return fn;
}

int main(){
    int num, res;

    printf("Informe um numero:\n");
    scanf("%d", &num);

    printf("\nFibonatti = %d\n", fibonacci(num));

    return 0;
}