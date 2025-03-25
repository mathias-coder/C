#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rest, minutos;
    double total, valor;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    valor = 50.00;
    if (minutos <= 100){
        printf("VALOR A PAGAR = %.2lf", valor);
    }
    else if (minutos < 0){
        printf("NAO E UM VALOR VALIDO!");
    }
    else{
        rest = 2 * (minutos - 100);
        total = valor + rest;

        printf("VALOR A PAGAR = %.2lf", total);

    }








    return 0;
}
