#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_esfera(float, float*, float*);

int main(){
    float raio = 0, area = 0, volume = 0;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    calc_esfera(raio, &area, &volume);
    printf("Area da esfera: %.2f\n", area);
    printf("Volume da esfera: %.2f", volume);
    return 0;
}

void calc_esfera(float R, float* area, float* volume){
    *area = 4 * 3.14159 * pow(R, 2);
    // (4/3) * pi = aprox.. 4.18879
    *volume = 4.18879 * pow(R, 3);
}