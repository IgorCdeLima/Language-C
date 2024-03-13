#include <stdio.h>
#include <stdlib.h>

int main()
{
    int impares, pares, n, test, contador;

    printf("Escrever um programa que escreve os numeros impares entre 10 e 20.");
    for (contador = 20; contador >= 10; contador--)
    {
        n = contador%2;
        if (n!=0)
        {
            printf("\nImpar: %d", contador);
        }
        else
        {
            printf("\nPar: %d", contador);
        }
    }
    return 0;
}
