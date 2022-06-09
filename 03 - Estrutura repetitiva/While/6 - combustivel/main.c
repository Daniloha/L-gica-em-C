#include <stdio.h>
#include <stdlib.h>

int main(){

    int C, g, d, a;
g = 0;
a = 0;
d = 0;

    while(C != 4){

            printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
            scanf("%d", &C);

        if(C == 1){
            a++;
        }
        else{
              if(C == 2){
            g++;
        }
        else{
              if(C == 3){
            d++;
        }
        }
        }
    }

    printf("MUITO OBRIGADO!\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Disel: %d\n", d);
    return 0;
}
