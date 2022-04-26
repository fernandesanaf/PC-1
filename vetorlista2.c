#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void um();
void dois();
void tres();
void quatro();

int main()
{
    setlocale(LC_ALL, "");
    int opcao;

    printf("-----------------------------------------------------------\n");
    printf("1 - UM      | 3 - TRÊS  \n");
    printf("2 - DOIS    | 4 - QUATRO \n");
    printf("-----------------------------------------------------------\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        um();
        break;

    case 2:
        dois();
        break;

    case 3:
        tres();
        break;

    case 4:
        quatro();
        break;

    default:
        printf("Valor Incorreto");
        break;
    }
    return 0;
}

void um()
{
    int num[7], i;

    printf("digite na sequência inversa\n");
    for (i = 6; i >= 0; i--)
    {
        printf("digite o %dÂº nÃºmero: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 7; i++)
    {
        printf("o %d número digitado é: %d\n", i + 1, num[i]);
    }

    return 0;
}

void dois()
{
    int num[6], i, posicao, valor;
    char continuar = 's';
    for (i = 0; i < 6; i++)
    {
        num[i] = 0;
    }
    while (continuar == 's')
    {
        printf("digite a posição do vetor: ");
        scanf("%d", &posicao);
        printf("digite o valor que deseja colocar no vetor: ");
        scanf("%d", &valor);
        if (posicao >= 0 && posicao < 6)
        {
            num[posicao] = valor;
        }
        else
        {
            printf("número maior que o vetor\n");
        }

        printf("deseja continuar?\n digite 's' para SIM \n 'n' para NÃO: \n");
        scanf("%s", &continuar);
    }

    for (i = 0; i < 6; i++)
    {
        printf("num[%d] = %d\n", i, num[i]);
    }
}

void tres()
{
    int num[20], i;
    for (i = 0; i < 20; i++)
    {
        num[i] = rand() % 10 + 1;
        if (num[i] == 7)
        {
            printf("num[%d] = %d\n", num[i]);
        }
    }
}

void quatro()
{
    int num[20], i;
    for (i = 0; i < 20; i++)
    {
        num[i] = rand() % 10 + 1;
        if (num[i] == 7)
        {
            printf("num[%d] = %d\n", num[i]);
        }
    }
}
