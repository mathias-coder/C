#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    double soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    soma = 0;
    double vet[N];

    for(int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        soma = soma + vet[i];
    }

    printf("\nVALORES = ");

    for(int i = 0; i < N; i++){
        printf(" %.1lf ", vet[i]);
    }
    printf("\nSOMA = %.1lf", soma);

    media = soma / N;

    printf("\nMEDIA = %.1lf", media);



    return 0;
}
