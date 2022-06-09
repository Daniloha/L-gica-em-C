#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double A, B, C;

    printf("Digite a medida A: ");
    scanf("%lf", &A);
    printf("Digite a medida B: ");
    scanf("%lf", &B);
    printf("Digite a medida C: ");
    scanf("%lf", &C);

    printf("AREA DO QUADRADO = %.4lf\n", pow(A, 2));
    printf("AREA DO TRIANGULO = %.4lf\n", (A * B)/2);
    printf("AREA DO TRAPEZIO = %.4lf\n", ((A + B)*C)/2);
    return 0;
}
