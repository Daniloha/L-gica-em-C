#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, M, N;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &N);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &M);

    double mat[N][M],vet[N];

    for(i = 0 ; i < N ; i++){
        printf("Digite os elementos da %da. linha: \n", i+1);
        for(j = 0 ; j < M ; j++){
            scanf("%lf", &mat[i][j]);
        }
    }

    printf("VETOR GERADO: \n");
    for(i = 0 ; i < N ; i++){
            vet[i] = 0;
        for(j = 0 ; j < M ; j++){
                vet[i] = vet[i] + mat[i][j];
            }
            }
       for(i = 0 ; i < N ; i++){
        printf("%.1lf\n", vet[i]);
       }
    return 0;
}
