#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, N;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    int idade[N], Is = 0;
    double altura[N], Am, As = 0, Ip;
    char nome[N][10];

    for(i = 0; i < N ; i++){
        printf("Dados da %d pessoa: \n", i + 1);
        printf("NOME: ");
        scanf("%s", &nome[i]);
        printf("IDADE: ");
        scanf("%d", &idade[i]);
        printf("ALTURA: ");
        scanf("%lf", &altura[i]);
        As = As + altura[i];
        if(idade[i] < 16){
            Is = Is + i;
        }
    }

    Am = As/N;
    Ip = (Is*100)/N;

    printf("\n");
    printf("Altura media: %.2lf\n", Am);
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", Ip);

    for(i = 0; i < N; i++){
        if(idade[i] < 16){
            printf("%s\n", nome[i]);
        }
    }
    return 0;
}
