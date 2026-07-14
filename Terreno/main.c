#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    double largura, comprimento, valor, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite o valor do terreno: ");
    scanf("%lf", &valor);

    area = largura * comprimento;
    preco = area * valor;

    printf("\nArea do terreno é = %.2lf\n", area);
    printf("\nPreço do terreno  é = %.2lf\n", preco);

    return 0;
}
