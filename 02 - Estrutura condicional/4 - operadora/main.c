#include <stdio.h>
#include <stdlib.h>

int main(){
    int min, d;
    double  T, M;
    printf("Digite a quantidade de minutos:");
    scanf("%d", &min);

    if(min <= 100){
        T = 50;
    }
        else{
            d = min - 100;
            M = d * 2.00;
            T = 50 + M;
        }

    printf("Valor a pagar: R$ %.2lf", T);
    return 0;
}
