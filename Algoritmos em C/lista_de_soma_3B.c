#include <stdio.h>

int main()
{
    int a, b, prox;
    int a0, b0; // salvando valores
    int soma;

    printf("digite os dois valores iniciais de 1a9:\n ");
    scanf("%d %d", &a, &b);

    a0 = a;
    b0 = b;

    soma = a + b;

    while (1)
    {
        prox = (a + b) % 10;

        printf(", %d", prox);

        soma += prox;

        a = b;
        b = prox;

        if ((a == a0 && b == b0) || (a == b0 && b == a0))
        {
            break;
        }
    }

    printf("\nsoma total: %d\n", soma);

    return 0;
}