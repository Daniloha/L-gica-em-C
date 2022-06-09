#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double a, b, c, x1, x2, D;

    printf("Coeficiente a: ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);

    D = pow(b, 2) - (4 * a * c);
    x1 = (- b + sqrt(D))/(2*a);
    x2 = (- b - sqrt(D))/(2*a);

    if(D < 0){
        printf("Esta equacao nao possui raizes reais \n");
    }

    else{
        printf("Delta = %.2lf\n", D);
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }

    return 0;
}
