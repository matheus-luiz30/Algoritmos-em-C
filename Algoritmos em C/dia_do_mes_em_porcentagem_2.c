#include <stdio.h>

int main()
{
    int dia, mes, ano;
    int hora, minuto;

    int diaDoAno; //dias que ja passaram
    int bissexto;

    long totalMinutos; // tudo em minutos
    float p; //porcentagem
    long minutosPercentual; //todos os minutos em porcentagem

    long diasCompletos;
    long restoMinutos;

    int horaResultado, minutoResultado;
    int diaResultado, mesResultado;

    printf("Digite a data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("Digite o horario (hh:mm): ");
    scanf("%d:%d", &hora, &minuto);

    printf("Digite o percentual P (0 a 100): ");
    scanf("%f", &p);

    diaDoAno = dia;

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    {
        bissexto = 1;

        switch (mes)
        {
            case 12: diaDoAno += 30;
            case 11: diaDoAno += 31;
            case 10: diaDoAno += 30;
            case 9:  diaDoAno += 31;
            case 8:  diaDoAno += 31;
            case 7:  diaDoAno += 30;
            case 6:  diaDoAno += 31;
            case 5:  diaDoAno += 30;
            case 4:  diaDoAno += 31;
            case 3:  diaDoAno += 29;
            case 2:  diaDoAno += 31;
            case 1:  break;
        }
    }
    else
    {
        bissexto = 0;

        switch (mes)
        {
            case 12: diaDoAno += 30;
            case 11: diaDoAno += 31;
            case 10: diaDoAno += 30;
            case 9:  diaDoAno += 31;
            case 8:  diaDoAno += 31;
            case 7:  diaDoAno += 30;
            case 6:  diaDoAno += 31;
            case 5:  diaDoAno += 30;
            case 4:  diaDoAno += 31;
            case 3:  diaDoAno += 28;
            case 2:  diaDoAno += 31;
            case 1:  break;
        }
    }

    totalMinutos = (diaDoAno - 1) * 24 * 60;
    totalMinutos += hora * 60;
    totalMinutos += minuto;

    minutosPercentual = totalMinutos * p / 100; //corta com a porcentagem

    diasCompletos = minutosPercentual / 1440; //quantos dias
    restoMinutos = minutosPercentual % 1440; //sobra em minutos 

    horaResultado = restoMinutos / 60; //quantas hrs
    minutoResultado = restoMinutos % 60; //sobra de minutos

    diaResultado = diasCompletos + 1; //so soma o resto
    mesResultado = 1;
//vai diminuindo os dias pra saber qual mes

    if (bissexto == 1)
    {
        while (1)
        {
            if (mesResultado == 1 && diaResultado > 31)
            {
                diaResultado -= 31;
                mesResultado++;
            }
            else if (mesResultado == 2 && diaResultado > 29)
            {
                diaResultado -= 29;
                mesResultado++;
            }
            else if (mesResultado == 3 && diaResultado > 31)
            {
                diaResultado -= 31;
                mesResultado++;
            }
            else if (mesResultado == 4 && diaResultado > 30)
            {
                diaResultado -= 30;
                mesResultado++;
            }
            else if (mesResultado == 5 && diaResultado > 31)
            {
                diaResultado -= 31;
                mesResultado++;
            }
            else if (mesResultado == 6 && diaResultado > 30)
            {
                diaResultado -= 30;
                mesResultado++;
            }
            else if (mesResultado == 7 && diaResultado > 31)
            {
                diaResultado -= 31;
                mesResultado++;
            }
            else if (mesResultado == 8 && diaResultado > 31)
            {
                diaResultado -= 31;
                mesResultado++;
            }
            else if (mesResultado == 9 && diaResultado > 30)
            {
                diaResultado -= 30;
                mesResultado++;
            }
            else if (mesResultado == 10 && diaResultado > 31)
            {
                diaResultado -= 31;
                mesResultado++;
            }
            else if (mesResultado == 11 && diaResultado > 30)
            {
                diaResultado -= 30;
                mesResultado++;
            }
            else if (mesResultado == 12 && diaResultado > 31)
            {
                diaResultado -= 31;
                mesResultado++;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        while (1)
        {
            if (mesResultado == 1 && diaResultado > 31)
            {
                diaResultado -= 31;
                mesResultado++;
            }
            else if (mesResultado == 2 && diaResultado > 28)
            {
                diaResultado -= 28;
                mesResultado++;
            }
            else if (mesResultado == 3 && diaResultado > 31)
            {
                diaResultado -= 31;
                mesResultado++;
            }
            else if (mesResultado == 4 && diaResultado > 30)
            {
                diaResultado -= 30;
                mesResultado++;
            }
            else if (mesResultado == 5 && diaResultado > 31)
            {
                diaResultado -= 31;
                mesResultado++;
            }
            else if (mesResultado == 6 && diaResultado > 30)
            {
                diaResultado -= 30;
                mesResultado++;
            }
            else if (mesResultado == 7 && diaResultado > 31)
            {
                diaResultado -= 31;
                mesResultado++;
            }
            else if (mesResultado == 8 && diaResultado > 31)
            {
                diaResultado -= 31;
                mesResultado++;
            }
            else if (mesResultado == 9 && diaResultado > 30)
            {
                diaResultado -= 30;
                mesResultado++;
            }
            else if (mesResultado == 10 && diaResultado > 31)
            {
                diaResultado -= 31;
                mesResultado++;
            }
            else if (mesResultado == 11 && diaResultado > 30)
            {
                diaResultado -= 30;
                mesResultado++;
            }
            else if (mesResultado == 12 && diaResultado > 31)
            {
                diaResultado -= 31;
                mesResultado++;
            }
            else
            {
                break;
            }
        }
    }

    printf("\ndata e horario correspondentes a %.2f%% do intervalo:\n", p);
    printf("%02d/%02d/%04d %02d:%02d\n", diaResultado, mesResultado, ano, horaResultado, minutoResultado);

    return 0;
}