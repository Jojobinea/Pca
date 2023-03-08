#include <stdio.h>

void print_array(float *pInicio, float *pFim) {
    float *p;
    
    for (p = pInicio; p <= pFim; p++) {
        printf("%.1f  ", *p);
    }
    printf("\n");
}


int main()
{
    float vet1 [] = {1.1, 1.2, 1.3, 1.4, 1.5},
          vet2 [] = {2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7},
          vet3 [] = {3.1, 3.2, 3.3, 3.4};
          
    printf("1a parte do vetor 1: ");
    print_array(&vet1[0], &vet1[3]);
    printf("2a parte do vetor 1: ");
    print_array(&vet1[4], &vet1[4]);
    printf("\n");
    printf("1a parte do vetor 2: ");
    print_array(&vet2[0], &vet2[3]);
    printf("2a parte do vetor 2: ");
    print_array(&vet2[4], &vet2[6]);
    printf("\n");
    printf("1a parte do vetor 3: ");
    print_array(&vet3[0], &vet3[1]);
    printf("2a parte do vetor 3: ");
    print_array(&vet3[2], &vet3[3]);

    return 0;
}
