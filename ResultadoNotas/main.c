#include <stdio.h>
#include <stdlib.h>

int main(){

    double nota1, nota2, notafinal;
    printf("Programa que mostra nota, quer saber sua nota?\n");
    printf("Insira em baixo\n");
    printf("Insira aqui a primeira nota: ");
    scanf("%lf", &nota1);

    printf("\nInsira aqui a segunda nota: ");
    scanf("%lf", &nota2);

    notafinal = (nota1 + nota2) / 2;

    if(notafinal <= 4.9){
        printf("Voce teve uma nota de: %.2lf\n", notafinal);
        printf("Voce foi reprovado\n");
    }else if(notafinal <= 5.9){
        printf("\nVoce teve uma nota de: %.2lf\n", notafinal);
        printf("\nVoce esta de recuperacao");
    }else{
        printf("Voce teve uma nota de: %.2lf\n", notafinal);
        printf("\nparabens voce passou :D");
    }

    return 0;
}
