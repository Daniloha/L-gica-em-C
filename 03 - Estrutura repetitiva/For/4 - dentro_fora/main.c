#include <stdio.h>
#include <stdlib.h>

int main(){

    int N = 0, X = 0, d = 0, f = 0, i;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    for(i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%d", &X);

        if(X >= 10 && X <= 20){
                d++;
        }
        else{
            f++;
        }
    }
    printf("%d DENTRO \n", d);
    printf("%d FORA \n", f);
    return 0;
}
