#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, x;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &x);

    for(i = 1; i <= 10; i++){
        N = i * x;
        printf("%d x %d = %d\n", x, i, N);
    }

    return 0;
}
