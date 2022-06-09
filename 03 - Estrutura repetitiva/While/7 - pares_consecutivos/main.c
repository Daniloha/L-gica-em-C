#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, soma, i, y, j;

        printf("Digite um numero inteiro: ");
        scanf("%d", &x);

    while(x != 0){
         printf("Digite um numero inteiro: ");
         scanf("%d", &x);
         j = x % 2;

         if(j != 0){
            x = x+1;
         }

         soma = x;
         i = 0;

        while(i <= 3 && x > 0){
            y = x + 2;
            soma = soma + y;
            x = y;
            i++;

        }
        printf("SOMA = %d\n", soma);
    }
    return 0;
}
