#include <stdio.h>
#include <stdlib.h>

void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

int main(){

    double g;
    char C[50];
    printf("Digite a medida da glicose:");
    scanf("%lf", &g);

    if(g <= 100){
        strcpy(C, "NORMAL");
        printf("Classificacao: %s", C);
    }
        else{
            if(g > 100 && g <= 140){
                strcpy(C, "ELEVADO");
                printf("Classificacao: %s\n", C);
            }
            else{
                if(g > 140){
                    strcpy(C, "DIABETES");
                    printf("Classificacao: %s\n", C);
                }
            }
        }
    return 0;
}
