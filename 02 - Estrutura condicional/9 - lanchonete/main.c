#include <stdio.h>
#include <stdlib.h>

int main(){

    int C;
    double Q, P;

    printf("Codigo do produto comprado: ");
    scanf("%d", &C);
    printf("Quantidade comprada: ");
    scanf("%lf", &Q);

    switch(C){
        case(1):
            P = Q * 5.00;
            printf("Valor a pagar: %.2lf", P);
        break;
          case(2):
            P = Q * 3.50;
            printf("Valor a pagar: %.2lf", P);
        break;
            case(3):
            P = Q * 4.80;
            printf("Valor a pagar: %.2lf", P);
        break;
            case(4):
            P = Q * 8.90;
            printf("Valor a pagar: %.2lf", P);
        break;
            case(5):
            P = Q * 7.32;
            printf("Valor a pagar: %.2lf", P);
        break;
    }
    return 0;
}
