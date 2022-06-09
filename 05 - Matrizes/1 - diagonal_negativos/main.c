#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, N, cont;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int mat[N][N];

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("Elemento [%d,%d]: " , i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");
    printf("DIAGONAL PRINCIPAL: \n");

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(i == j){
                printf("%d ", mat[i][j]);
            }
        }
    }
    printf("\n");
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(mat[i][j] < 0){
                    printf("%d ", mat[i][j]);
                cont++;
            }
        }
    }
    printf("QUANTIDADE DE NEGATIVOS = %d", cont-1);
    return 0;
}
