#include <stdio.h>

int main()
{
    int x, y;
    printf("Digite o valor do comprimento do retangulo: \n");
    scanf("%d", &x);
    printf("Digite o valor da altura do retangulo: \n");
    scanf("%d", &y);
    printf("Valor do Perímetro: %d", (2*x)+(2*y));
    return 0;
}