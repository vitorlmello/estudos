#include <stdio.h>

int main()
{
    int x, y;
    float impCons = 5, impNCons = 3.8;
    printf("Nesta regiao o imposto por metro quadrado de terreno construido e de %.2f Reais, e de terreno nao construido e de %.2f Reais.\n", impCons, impNCons );
    printf("Digite o metro quadrado de terreno construido: \n");
    scanf("%d", &x);
    printf("Digite o metro quadrado de terreno nao construido: \n");
    scanf("%d", &y);
    printf("Valor de Imposto a pagar: %.2f Reais", (impCons*x)+(impNCons*y));
    return 0;
}