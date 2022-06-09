#include <stdio.h>
#include <stdlib.h>

int main(){

    double Pu, P, D, T;
    int Q;

    printf("Preco unitario do produto: ");
    scanf("%lf", &Pu);
    printf("Quantidade comprada: ");
    scanf("%d", &Q);
    printf("Dinheiro recebido: ");
    scanf("%lf", &D);

    P = Pu * Q;
    T = D - P;

    printf("TROCO = %.2lf", T);

    return 0;
}
