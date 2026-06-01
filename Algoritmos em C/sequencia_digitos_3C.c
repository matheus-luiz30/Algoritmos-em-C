#include <stdio.h>

int main()
{
    int i, j;
    int a, b, prox;
    int a0, b0;
    int contador;

    int maior = 0, menor = 999;
    int aMaior, bMaior;
    int aMenor, bMenor;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            a = i;
            b = j;

            a0 = a; // salva os valores do for 
            b0 = b;

            contador = 2; // comeca com os dois primeiros, ja tem a e b

            while (1)
            {
                prox = (a + b) % 10;

                a = b;
                b = prox; //no proximo sera o valor de prox

                contador++; //o numero da sequencia 

                if (a == a0 && b == b0) //zera da break
                {
                    break;
                }
            }

            // verifica maior
            if (contador > maior)
            {
                maior = contador; // o maior valor entrara e atualizara
                aMaior = i;
                bMaior = j;
            }

            // verifica menor
            if (contador < menor)
            {
                menor = contador; // o menor valor entrara e atualizara
                aMenor = i;
                bMenor = j;
            }
        }
    }

    printf("maior sequencia: %d elementos (par: %d, %d)\n", maior, aMaior, bMaior);
    printf("menor sequencia: %d elementos (par: %d, %d)\n", menor, aMenor, bMenor);

    return 0;
}