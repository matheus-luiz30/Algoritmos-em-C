#include <stdio.h>

int main()
{
    int dia, mes, ano, acumulador;

    printf("digite o dia (dd/mm/aaaa):\n ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    acumulador = dia;

    //divisível por 4, exceto para anos múltiplos de 100, ou que não são divisíveis por 400
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))

    {

        switch (mes)
        {
            case 12: acumulador += 30;
            case 11: acumulador += 31;
            case 10: acumulador += 30;
            case 9:  acumulador += 31;
            case 8:  acumulador += 31;
            case 7:  acumulador += 30;
            case 6:  acumulador += 31;
            case 5:  acumulador += 30;
            case 4:  acumulador += 31;
            case 3:  acumulador += 29; // fevereiro 29
            case 2:  acumulador += 31;
            case 1:  break;
        }
    }
    else

    {
        
        switch (mes)
        {
            case 12: acumulador += 30;
            case 11: acumulador += 31;
            case 10: acumulador += 30;
            case 9:  acumulador += 31;
            case 8:  acumulador += 31;
            case 7:  acumulador += 30;
            case 6:  acumulador += 31;
            case 5:  acumulador += 30;
            case 4:  acumulador += 31;
            case 3:  acumulador += 28; // fevereiro 28
            case 2:  acumulador += 31;
            case 1:  break;
        }
    }

    printf("dia do ano: %d\n", acumulador);

    return 0;
}