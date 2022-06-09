#include <stdio.h>
#include <stdlib.h>

void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}


int main(){

    char nome[50];
    double V, P;
    int H;

    printf("Nome: ");
    ler_texto(nome, 50);
    printf("Valor por hora: ");
    scanf("%lf", &V);
    printf("Horas trabalhadas: ");
    scanf("%d", &H);

    P = V * H;

    printf("O pagamento para %s deve ser %.2lf reais.", nome, P);

    return 0;
}
