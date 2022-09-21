#include <stdio.h>
#include <stdlib.h>

int negativos(float*, int);

int main(){
    int n = 0, neg = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &n);
    float vetor[n];
    for(int i = 0; i < n; i++){
        printf("Digite um valor para adicionar ao vetor: ");
        scanf("%f", &vetor[i]);
    }
    neg = negativos(&vetor[0], n);
    printf("Número de negativos no vetor: %i", neg);
    return 0;
}

int negativos(float* vet, int N){
    int neg = 0;
    for(int i = 0; i < N; i++){
        if(*vet < 0)
            neg++;
        vet++;
    }
    return neg;
}