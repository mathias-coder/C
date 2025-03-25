#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M, N, i, j, cont;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    M = N;
    int mat [M][N];
    cont = 0;

    for (i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            if(mat[i][j] < 0){
                cont++;
            }
        }
    }

    printf("DIAGONAL PRINCIPAL:\n");

    for (i = 0; i < N; i++){
        for(j = 0; j < N; j++){
        }
    printf("%d ", mat[i][i]);
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d", cont);

    return 0;
}
