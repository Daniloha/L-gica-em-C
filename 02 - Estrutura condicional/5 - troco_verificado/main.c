#include <stdio.h>
#include <stdlib.h>

int main(){
    int Q;
    double V, P, R;

    printf("Preco unitario do produto: ");
    scanf("%lf", &V);
    printf("Quantidade comprada: ");
    scanf("%d", &Q);
    printf("Dinheiro recebido: ");
    scanf("%lf", &R);

    P = V * Q;

    if(R < P){
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS", (P - R));
    }
    else{
        printf("TROCO = %.2lf", (R - P));
    }
    return 0;
}
