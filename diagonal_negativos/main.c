#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, qtdnegativos;

    printf("Qual a ordem da matriz: ");
    scanf("%d", &n);

    int mat[n][n];

    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
       }
    }

    printf("Diagonal Principal:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", mat[i][i]);
    }

    qtdnegativos = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] < 0){
                qtdnegativos++;
            }
        }
    }

    printf("\nQuantidade de negativos = %d\n", qtdnegativos);

    return 0;
}
