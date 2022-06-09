#include <stdio.h>
#include <stdlib.h>


int main(){
   int inicio, fim, tempo;
    printf("Hora inicial: ");
    scanf("%d", &inicio);
    printf("Hora final: ");
    scanf("%d", &fim);
    if(inicio >= fim){
        printf("O JOGO DUROU %d HORA(S) ", 24 + fim - inicio );
    }
    else{
        printf("O JOGO DUROU %d HORA(S) ", fim - inicio );
    }

    return 0;
}
