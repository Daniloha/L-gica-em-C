#include <stdio.h>
#include <stdlib.h>

int main(){

    double D, C, L;

    printf("Distancia percorrida: ");
    scanf("%lf", &D);
    printf("Combustível gasto: ");
    scanf("%lf", &C);

    L = D / C;

    printf("Consumo medio = %.3lf", L);

    return 0;
}
