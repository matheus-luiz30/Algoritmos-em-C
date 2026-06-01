#include <stdio.h>

int main()
{
    int surfista;
    float nota;

    float maior1 = 0, segunda1 = 0;
    float maior2 = 0, segunda2 = 0;

    float pont1, pont2;
    float precisa;

    while (1)
    {
        printf("\ndigite o surfista, 1 ou 2 e 0 para sair:\n ");
        scanf("%d", &surfista);

        if (surfista == 0)
        {
            break;
        }

        printf("digite a nota:\n ");
        scanf("%f", &nota);

        // surfista 1
        if (surfista == 1)
        {
            if (nota > maior1) //ve se e a maior 
            {
                segunda1 = maior1;
                maior1 = nota;
            }
            else if (nota > segunda1) //ve se e a segunda maior
            {
                segunda1 = nota;
            }
        }

        // surfista 2
        else if (surfista == 2)
        {
            if (nota > maior2) // se o teste do primeiro for vdd, executa e para
            {
                segunda2 = maior2;
                maior2 = nota;
            }
            else if (nota > segunda2) //se nao for, testa o segundo
            {
                segunda2 = nota;
            }
        }

        // pontuacao
        pont1 = maior1 + segunda1;
        pont2 = maior2 + segunda2;

        printf("\npontuacao S1: %.2f", pont1);
        printf("\npontuacao S2: %.2f\n", pont2);

        // quem ta ganhando + quanto precisa
        if (pont1 > pont2)
        {
            precisa = (pont1 + 0.01) - maior2; //printa tudo de uma vez e ve qnt falta
            printf("surfista 1 lidera\n");
            printf("surfista 2 precisa de '%.2f' pra passar\n", precisa);
        }
        else if (pont2 > pont1)
        {
            precisa = (pont2 + 0.01) - maior1; //para qnd digita 0
            printf("surfista 2 lidera\n");
            printf("surfista 1 precisa de '%.2f' pra passar\n", precisa);
        }
        else // empate
        {
            printf("empate\n");

            precisa = (pont1 + 0.01) - maior1;
            printf("surfista 1 precisa de: %.2f\n", precisa);

            precisa = (pont2 + 0.01) - maior2;
            printf("surfista 2 precisa de: %.2f\n", precisa);
        }
    }

    // resultado
    printf("resultado\n");

    if (pont1 > pont2)
    {
        printf("surfista 1 venceu\n");
    }
    else if (pont2 > pont1)
    {
        printf("surfista 2 venceu\n");
    }
    else
    {
        printf("empate\n");
    }

    return 0;
}