#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double base, altura, perimetro, area, diagonal;

    printf("Base do retangulo:\n ");
    scanf("%lf", &base);

    printf("Altura do retangulo:\n ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = (2 * base) + (2 * altura);
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    printf("AREA = %.4lf\n", area);
    printf("PERIMETRO = %.4lf\n", perimetro);
    printf("DIAGONAL = %.4lf\n", diagonal);

    return 0;
}
