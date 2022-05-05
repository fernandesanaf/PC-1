// Na linguagem C, defina um tipo registro que representa uma Hora e que
//  contenha campos para hora, minuto e segundo. Declare um vetor de seis
//  Horas. Armazene nas quatro primeiras posi¸c˜oes do vetor Horas
//  informadas pelo usu´ario. Apenas Horas v´alidas podem ser aceitas.
//  Armazene na quinta posi¸c˜ao do vetor a soma das quatro Horas (podendo
//  exceder 24 horas). Na ´ultima posi¸c˜ao armazene a menor Hora cadastrada.
//  Ao final apresente adequadamente todas as informa¸c˜oes do vetor.

#include <stdio.h>
#include <stdlib.h>

struct Horas
{
    int hora;
    int minuto;
    int segundo;
};

int main()
{
    struct Horas a[5], i;

    for (i == 0; i < 4; i++)
    {
        printf(" hora: ");
        scanf("%d", &a.hora);

        printf(" minuto: ");
        scanf("%d", &a.minuto);

        printf(" segundo: ");
        scanf("%d", &a.minuto);
    }

    return 0;
}