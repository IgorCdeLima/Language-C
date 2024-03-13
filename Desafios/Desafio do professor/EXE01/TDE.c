#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a, b, m;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &b);
    m = (a + b)/2;
    printf("A media dos dois valores e: %d", m);
    return 0;
}
