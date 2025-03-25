#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, j, maior;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int mat[N][N], vet[N];

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("MAIOR ELEMENTO DE CADA LINHA:\n ");

    for(i = 0; i < N; i++){
        maior = mat[i][0];
            for(j = 0; j < N; j++){
                if(maior < mat[i][j]){
                   maior = mat[i][j];
                }
        }
        vet[i] = maior;
    }

    for(i = 0; i < N; i++){
        printf("%d\n", vet[i]);
    }


    return 0;
}
