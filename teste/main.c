#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resposta;

    printf("O que vai fazer? deseja entrar s?\n");
    scanf("%c", &resposta);

    if(resposta == 'S' || resposta == 's'){
        printf("Voce esta aqui :D/n");
        printf("Ola, mundo");
    }else{
        printf("tem nada aqui :D/n");
        printf("flw")
    }

    return 0;
}
