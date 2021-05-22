#include <stdio.h>

int main()
{
    int num, primo = 1, div;
    printf("Digite o numero para verificar se e primo: \n");
    scanf("%d", &num);

    for(int i = 2; i <= num/2; i++)
    {
        if(num%i == 0)
        {
            div = i;
            primo = 0;
            break;
        }
    }

    if(primo == 1)
        printf("O numero %d e um numero primo, ele so e divisivel por ele mesmo e 1.", num);
    else
        printf("O numero %d nao e um numero primo, ele e divisivel por %d.", num, div);

    return 0;
}