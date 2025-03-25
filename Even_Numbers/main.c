#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, cont;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    int vet[N];

    for(int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nNUMEROS PARES:\n");

    cont = 0;
    for(int i = 0; i < N; i++){
        if(vet[i] % 2 == 0){
        printf(" %d ", vet[i]);
        cont++;
        }
    }
    printf("\nQUANTIDADE DE PARES = %d", cont);







    return 0;
}
