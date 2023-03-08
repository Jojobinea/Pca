#include <stdio.h>

int* ache_o_dois(int* pInicio, int* pFim) {
    for (int* num = pInicio; num != pFim; num++) {
        if (*num == 2) {
            return num;
        }
    }
    return NULL;
}

int main() {
    int array[10] = {4, 14, 2, 8, 3, 2, 2, 6, 9, 10};
    int* endereco = ache_o_dois(array, array + 10);

    printf("Endereco onde o valor 2 foi encontrado: %p\n", (void*)endereco);

    return 0;
}