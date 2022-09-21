#include <stdio.h>
#include <stdlib.h>

void frac(float, int*, float*);

int main(){
    float numero = -1, fracao = -1;
    int inteiro = -1;
    printf("Digite o número que deseje particionar: ");
    scanf("%f", &numero);
    frac(numero, &inteiro, &fracao);
    printf("Parte inteira: %i", inteiro);
    printf("Parte fracionada: %f", fracao);
    return 0;
}

void frac(float num, int* inteiro, float* frac){
    *inteiro = (int) num;
    *frac = num - ((int)num);
}