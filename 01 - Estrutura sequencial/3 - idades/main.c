#include <stdio.h>
#include <stdlib.h>

void ler_texto(char *buffer, int length)
{

    fgets(buffer, length, stdin);

    strtok(buffer, "\n");
}

void limpar_entrada(void)
{

    char c;

    while ((c = getchar()) != '\n' && c != EOF) {}
}


int main()
{

    char nome1[50], nome2[50];
    double idade1, idade2;
    double media;

    printf("Dados da primeira pessoa: \n");
    printf("NOME: ");
    ler_texto(nome1, 50);

    printf("IDADE: ");
    scanf("%lf", &idade1);

    printf("Dados da segunda pessoa: \n");
    limpar_entrada();
    printf("NOME: ");
    ler_texto(nome2, 50);

    printf("IDADE: ");
    scanf("%lf", &idade2);

    media = (idade1 + idade2)/2;

    /*printf("%s e %s e de %ls anos. \n", nome1[50], nome2[50], media);
    */
    printf("A idade media de %s", nome1);
    printf(" e %s", nome2);
    printf(" e de: %.1lf", media);
    printf(" anos.");




    return 0;
}
