#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n1, n2, n3;

    printf("Primeiro valor: ");
    scanf("%d", &n1);

    printf("Segundo valor: ");
    scanf("%d", &n2);

    printf("Terceiro valor: ");
    scanf("%d", &n3);

    if(n1 < n2 && n1 < n3){
        printf("MENOR = %d", n1);
    }
    else if(n2 < n1 && n2 < n3){
        printf("MENOR = %d", n2);
    }
    else{
        printf("MENOR = %d", n3);
    }


    return 0;
}
