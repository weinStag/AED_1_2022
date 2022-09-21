#include <stdio.h>
#include <stdlib.h>

int raizes(float, float, float, float*, float*);

int main(){
    float a = 0, b = 0, c = 0, x1 = 0, x2 = 0;
    int numRaizes = 0;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    if(a != 0){
        printf("Digite o valor de B: ");
        scanf("%f", &b);
        printf("Digite o valor de C: ");
        scanf("%f", &c);
        numRaizes = raizes(a, b, c, &x1, &x2);
        switch (numRaizes){
            case 0:
                printf("A equacao não possui raizes");
            break;
            case 1:
                printf("A equacao tem 1 raiz real, sendo ela: x: %.2f", x1);
            break;
            case 2:
                printf("A equacao tem 2 raizes reais, sendo elas: x1: %.2f e x2: %.2f", x1, x2);
            break;
        }
    }else
        printf("o valor de A nao pode ser igual a 0!")
    return 0;
}

int raizes(float A,float B,float C,float * X1,float * X2){
    float delta = 0;
    delta = pow(B, 2) - (4 * A * C)
    if (delta < 0)
        return 0;
    else{
        *X1 = (- B + (sqrt(delta)))/(2 * A);
        *X2 = (- B - (sqrt(delta)))/(2 * A);
        if(delta == 0)
            return 1;
        else
            return 2;
    } 
}