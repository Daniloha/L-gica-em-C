#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159

int main(){

    double A, r;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &r);

    A = pi * pow(r, 2);

    printf("AREA = %.3lf", A);

    return 0;
}
