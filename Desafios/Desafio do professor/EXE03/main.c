#include <stdio.h>
#include <stdlib.h>

int main()
{
    int F, f, contador;

    printf("Digite um número: "); scanf("%d", &f);
    F = f; f = f-1;
    for (contador = f; contador >= 1; contador--)
    {
        printf("\nF: %d contador: %d", F, contador);
        F = F * contador;
    }
    printf("\nO valor do fatorial e: %d", F);
    return 0;
}
