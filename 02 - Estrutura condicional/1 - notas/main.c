#include <stdio.h>
#include <stdlib.h>

int main(){

    double A, B, M;

    printf("Digite a primeira nota: ");
    scanf("%lf", &A);
    printf("Digite a segunda nota: ");
    scanf("%lf", &B);

    M = A + B;
    printf("NOTA FINAL = %.1lf\n", M);

    if(M < 60.00){
        printf("REPROVADO");

    }
    return 0;
}
