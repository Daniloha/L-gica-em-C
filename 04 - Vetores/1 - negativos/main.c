#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, N;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for(i = 0 ; i < N ; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    for(i = 0 ; i < N ; i++){
        if(vet[i] < 0){
            printf("%.0lf\n", vet[i]);
        }
    }
    return 0;
}
