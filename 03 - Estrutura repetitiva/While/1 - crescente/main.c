#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;
    x = 0;
    y = 1;


    do{

            printf("Digite dois numeros: \n");
            scanf("%d", &x);
            scanf("%d", &y);

        if(x < y){
            printf("CRESCENTE!\n");
        }
        else{
                if(x > y){
            printf("DECRESCENTE!\n");
                }
        }
    }
     while(x != y);
     system("pause");
    return 0;
}
