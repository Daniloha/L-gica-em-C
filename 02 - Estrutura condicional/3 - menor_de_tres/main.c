#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y, z;

    printf("Primeiro valor:");
    scanf("%d", &x);
    printf("Segundo valor: ");
    scanf("%d", &y);
    printf("Terceiro valor: ");
    scanf("%d", &z);

    if(x >= y){
        x = y;
        }
    else{
            if (x >= z){
                x = z;
            }
    }

    printf("MENOR = %d", x);
    return 0;
}
