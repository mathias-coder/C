#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, j, soma;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int A[N][N];
    soma = 0;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(i < j){
            soma = soma + A[i][j];
            }
        }
    }

    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d", soma);




    return 0;
}
