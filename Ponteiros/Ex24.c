#include <stdio.h>
#include <stdlib.h>

void minmax(int[], int, int*, int*);

int main(){
    int n = 0, min = 0, max = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        printf("Digite um valor para adicionar ao vetor: ");
        scanf("%i", &vetor[i]);
    }
    minmax(vetor, n, &min, &max);
    printf("Pontos criticos da array:\nminimo: %i\nmaximo: %i", min, max);
    return 0;
}

void minmax(int v[], int n, int* min, int* max){
    *min = v[0];
    *max = v[0];
    for(int i = 0; i < n; i++){
        if(v[i] > *max)
            *max = v[i];
        if(v[i] < *min)
            *min = v[i];
    }
}