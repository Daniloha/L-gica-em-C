#include <stdio.h>
#include <stdlib.h>

int main(){

    int X, Y, i, soma;
    X = 0;
    Y = 0;
    soma = 0;

    printf("Digite dois numeros: \n");
    scanf("%d", &X);
    scanf("%d", &Y);
    if(X > Y){
        i = Y;
        Y = X;
        X = i;
        i = 0;
    }

    for(i = (X+1); i < Y; i++ ){
        if(X % 2 != 0){
                soma = soma + X;
        }
        X++;
    }
    printf("SOMA DOS IMPARES = %d", soma);
    return 0;
}
