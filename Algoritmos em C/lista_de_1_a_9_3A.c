#include <stdio.h>

int main()
{
    int a, b, prox;
    int soma, n;

    printf("digite de 1 a 9:\n ");
    scanf("%d %d", &a, &b);

    printf("digite o valor de N: ");
    scanf("%d", &n);

    soma = a + b;

    printf("sequencia: %d, %d", a, b);

    for (; soma <= n; )
    {
        prox = (a + b) % 10;

        soma += prox;

        a = b;
        b = prox;
    } //soma com o valor antigo da soma //sempre somando o ultimo digito

    printf("\nsoma final: %d\n", soma);

    return 0;
}