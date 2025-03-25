#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int qtd;
    double preco, total, cash, troco, falta;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);

    printf("Quantidade comprada: ");
    scanf("%d", &qtd);

    total = (qtd * preco);

    printf("Dinheiro recebido: ");
    scanf("%lf", &cash);

    if(cash < total){
        falta = total - cash;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS", falta);
    }
    else{
        troco = cash - total;
        printf("TROCO = %.2lf", troco);
    }







    return 0;
}
