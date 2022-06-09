#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double B, h, A, P, d;

    printf("Base do retangulo: ");
    scanf("%lf", &B);
    printf("Altura do retangulo: ");
    scanf("%lf", &h);

    A = B * h;
    P = (2*B) + (2*h);
    d = sqrt(pow(B,2)+ pow(h,2));

    printf("AREA = %.4lf\n", A);
    printf("PERIMETRO = %.4lf\n", P);
    printf("DIAGONAL = %.4lf\n", d);




    return 0;
}
