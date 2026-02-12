#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float B, C, A;

    // ENTRADA

    printf("Ler Cateto 1: ");
    scanf("%f", &B);
    printf("Ler Cateto 2: ");
    scanf("%f", &C);

    // PROCESSAMENTO

    A = sqrt(B*B + C*C);

    // SAIDA

    printf("O valor da Hipotenusa é: %.2f\n", A);
    return 0;
}
