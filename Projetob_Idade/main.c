#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome1[50],nome2[50];
    int idade1, idade2;
    double idademedia;

    printf("Dados da primeira pessoa: \n");
    printf("\nNome: ");
    gets(nome1);
    printf("\nIdade: ");
    scanf("%d", &idade1);

    printf("\nDados da segunda pessoa: \n");
    printf("\nNome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    printf("\nIdade: ");
    scanf("%d", &idade2);

    idademedia = (double)(idade1 + idade2) / 2;

    printf("A idade media de %s e %s eh de %.1lf anos",nome1, nome2 ,idademedia);

    return 0;
}
