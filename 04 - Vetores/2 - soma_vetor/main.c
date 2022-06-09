#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, N;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N], soma = 0, media;

    for(i = 0; i < N ; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }
    printf("\n");
    printf("VALORES = ");

    for(i = 0; i < N; i++){
        printf("%.1lf ", vet[i]);
        soma = soma + vet[i];
    }
    printf("\n");
    media = soma/N;
    printf("SOMA = %.2lf\n", soma);
    printf("MEDIA = %.2lf", media);
    return 0;
}
