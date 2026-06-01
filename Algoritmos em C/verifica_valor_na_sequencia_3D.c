#include <stdio.h>

int main()
{
    int a, b, prox, N;
    int a0, b0;
    int achou = 0;

    printf("digite os dois valores iniciais:\n ");
    scanf("%d %d", &a, &b);

    printf("digite o valor N:\n ");
    scanf("%d", &N);

    a0 = a; //guarda
    b0 = b;

    // ve os dois primeiros
    if (a == N || b == N)
    {
        achou = 1;
    }

    while (1)
    {
        prox = (a + b) % 10; //gera os numeros

        if (prox == N)
        {
            achou = 1;
        }

        a = b;
        b = prox;

        if (a == a0 && b == b0)
        {
            break;
        }
    }

    if (achou == 1)
    {
        printf("o valor aparece na sequencia\n");
    }
    else
    {
        printf("o valor nao aparece na sequencia\n");
    }

    return 0;
}