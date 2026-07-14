#include <stdio.h>
#include <stdlib.h>

int main(){

    int X, Y;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &X, &Y);

    while(X != Y){
        if(X < Y){
            printf("Esses numeros sao Crescente\n");
        }else{
            printf("Esses numeros sao Decrescente\n");
        }
        printf("Digite dois numeros: \n");
        scanf("%d %d", &X, &Y);
    }
    printf("O programa foi finalizado.");

    return 0;
}
