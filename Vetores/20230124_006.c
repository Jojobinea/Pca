#include <stdio.h>

void printArray(int quant, int nums[]){
    for(int i = 0; i < quant; i++){
        printf("%d ", nums[i]);
    }
}

void selectionSort( int quant, int nums[]) {
    int menor, aux;
    
    for(int sort = 0; sort < quant; sort++){
        menor = sort;
        
        for(int i = sort; i < quant; i++){
            if(nums[i] < nums[menor])
                menor = i;
        }
        aux = nums[sort];
        nums[sort] = nums[menor];
        nums[menor] = aux;
    }
}


int main(){
    int quant;
    
    do {
        printf("Informe a quantidade de numeros a serem informados (maximo de 100 numeros): ");
        scanf("%d", &quant);

        if(quant > 100 || quant < 0)
            printf("Numero Invalido! Informe outro valor:\n");
    } while (quant > 100 || quant < 0);

    int n[quant];

    for(int i = 0; i < quant; i++){
        do {
            printf("Informe um numero: ");
            scanf("%d", &n[i]);

            if(n[i] > 100)
                printf("\nNumero invalido! Informe outro numero menor que 100\n");

        } while (n[i] > 100);
    }
    
    selectionSort(quant, n);
    printArray(quant, n);
    return 0;
}
