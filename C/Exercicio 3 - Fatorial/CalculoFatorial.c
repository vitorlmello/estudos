#include <stdio.h>

int main()
{
    int num, fat = 1;
    printf("Digite o numero para o calculo Fatorial: \n");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++)
    {
        fat = fat * i;
    }
    printf("Valor do Fatorial do numero %d e %d", num, fat);
    return 0;
}