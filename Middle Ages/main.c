#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, soma, count;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &x);

    soma = 0;
    count = 0;

    while(x >= 0){
        soma = soma + x;
        count = count + 1;
        scanf("%d", &x);
    }

    if (count == 0){
        printf("IMPOSSIVEL CALCULAR");
    }
    else{
    media = (double)soma / count;
    printf("MEDIA = %.2lf", media);

    }






    return 0;
}
