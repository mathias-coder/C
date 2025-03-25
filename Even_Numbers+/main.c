#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, soma, cont;
    double media;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &N);

    int vet[N];

    soma = 0;
    cont = 0;
    for(int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

        if(vet[i] % 2 == 0){
            cont++;
            soma = soma + vet[i];
            media = soma / cont;
        }
    }
    if(cont == 0){
        printf("NENHUM NUMERO PAR\n");
    }
    else{
        printf("\nMEDIA DOS PARES = %.1lf", media);
    }







    return 0;
}
