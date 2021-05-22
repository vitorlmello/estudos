#include <stdio.h>

int main()
{    
    // Comentarios - Eu poderia ter feito um metodo Fibonacci com recursividade, mas quis fazer da forma mais simples possivel.
    int num, antUm = 1, antDois = 1, temp;
    printf("Digite o numero da sequencia de Fibonacci: \n");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        if(i>2)
        {
            temp = antUm + antDois;
            antDois = antUm;
            antUm = temp;
            printf("Posicao %d: %d \n", i, temp);
        }
        else
        {
            printf("Posicao %d: %d \n", i, 1);
        }
    }

    return 0;
}