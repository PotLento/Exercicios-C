#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float L, area;

    // ENTRADA

    printf("VALOR DO LADO DO QUADRADO: ");
    scanf("%f", &L);
    // PROCESSAMENTO

    area = L * L;
    //SAÍDA

    printf("A area do quadrado é: %.2f\n", area);
    return 0;
}
