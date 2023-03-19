#include <stdio.h>
#include <stdlib.h>

int* aloca_vetor(int n) {
    int* vetor = (int*) malloc(n * sizeof(int));
    
    printf("Informe os %d valores do vetor:\n", n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    
    return vetor;
}

void maior_menor(int* vetor, int n, int* maior, int* menor) {
    *maior = vetor[0];
    *menor = vetor[0];
    
    for (int i = 1; i < n; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}

int main() {
    int tam, *vetor, maior, menor;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);

    vetor = aloca_vetor(tam);

    maior_menor(vetor, tam, &maior, &menor);

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    free(vetor);

    return 0;
}