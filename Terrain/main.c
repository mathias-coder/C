#include <stdio.h>
#include <stdlib.h>


int main()
{

    double comprimento, largura, valor, area, preco;

    printf("Digite a largura do terreno:\n ");
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno:\n ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado:\n ");
    scanf("%lf", &valor);

    area = largura * comprimento;
    printf("AREA DO TERRENO: %.2lf\n", area);

    preco = valor * area;
    printf("VALOR DO TERRENO: %.2lf\n", preco);






    return 0;
}


