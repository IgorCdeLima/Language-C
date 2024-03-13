#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int triangulo, quadrado, trapezio, retangulo, circulo;

    printf("Areas do geometricas");
    printf("\n----------------------------------\n");
    printf("Digite tres valores: ");
    printf("\nValor a: ");
    scanf("%d", &a);
    printf("\nValor b: ");
    scanf("%d", &b);
    printf("\nValor c: ");
    scanf("%d", &c);
    printf("\nOs valores digitados sao a: %d, b: %d c: %d", a, b, c);
    triangulo = (a*b)/2;
    quadrado = b*b;
    trapezio = ((b*a)*c)/2;
    retangulo = a*b;
    circulo = 3.14*(c*c);
    printf("\nArea do triangulo: %d", triangulo);
    printf("\nArea do quadrado: %d", quadrado);
    printf("\nArea do trapezio: %d", trapezio);
    printf("\nArea do retangulo: %d",retangulo);
    printf("\nArea do circulo: %d", circulo);
    return 0;
}
