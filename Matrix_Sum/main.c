#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M, N, i, j;

    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%d", &M);
    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%d", &N);

    int A[M][N], B[M][N], soma[M][N];

    printf("Digite os valores da matriz A:\n ");

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os valores da matriz B:\n ");

     for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nSOMA DAS MATRIZES = \n");

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            soma[i][j] = A[i][j] + B[i][j];
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }




    return 0;
}
