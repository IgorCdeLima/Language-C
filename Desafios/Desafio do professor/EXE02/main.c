#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N, H, F;
    float Vh, Sf, Vf;


    printf("INFO DE FUNCIONARIOS");
    printf("\n-----------------------------------------------------------------------\n");
    printf("\nNumero do Funcionario: ");
    scanf("%d", &N);
    printf("\nHoras de trabalho: ");
    scanf("%d", &H);
    printf("\nValor\h: ");
    scanf("%f", &Vh);
    printf("\nFilhos com menos de 14 anos: ");
    scanf("%d", &F);
    printf("\nSalário da Familia: ");
    scanf("%f", &Sf);
    Vf = H*Vh+F*Sf;
    printf("\nO Salário total da familia do funcionario %d e de: R$ %.2f", N, Vf);
    return 0;
}
