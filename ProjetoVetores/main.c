#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, i;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for(i = 0; i < N; i++){
        printf("\nDigite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nNumeros digitados:\n");
    for(i = 0; i < N; i++){
        printf("%.1lf\n", vet[i]);
    }

    return 0;
}
