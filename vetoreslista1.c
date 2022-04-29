#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void um();
void dois();
void tres();
void quatro();
void cinco();
void seis();
void sete();
void oito();

int main()
{
    int opcao;

    printf("-----------------------------------------------------------\n");
    printf("1 - UM      | 5 - CINCO  \n");
    printf("2 - DOIS    | 6 - SEIS \n");
    printf("3 - TRES    | 7 - SETE \n");
    printf("4 - QUATRO  | 8 - OITO\n");
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

    case 5:
        cinco();
        break;

    case 6:
        seis();
        break;

    case 7:
        sete();
        break;

    case 8:
        oito();
        break;
    default:
        printf("Valor Incorreto");
        break;
    }
    return 0;
}
void um()
{
    int idade[50];
    int nasc_cientista[20];
    float salario[30];
    float alt_estudantes[100];
    float temp_diaria[7];
    float temp_caldeira[48];
    float notas_estudantes[30];
    float notas_estudantes_provas[75];
    float coef_redimento_estudantes[25];
    int quant_familia[20];
    int ano_nasc[20];
    float consumo_gasolina[20];
    float gastos_diario[365];
    float vazao_litros[5];
    float vol_pressao[20];
}

/*dois() Faça um programa que declare um vetor de cinco números inteiros. O
usuário deve informar, um a um, todos os valores a serem armazenados no
vetor. Ao final seu programa deverá imprimir todos os elementos do vetor.*/

void dois()
{
    int num[5], i;

    for (i = 0; i < 5; i++)
    {
        printf("digite o %dº numero: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("o %dº numero digitado e: %d\n", i + 1, num[i]);
    }
}

/*tres() Faça um programa que declare um vetor de cinco números inteiros.
Inicialize todas as posições do vetor com o valor zero e imprima o vetor.*/

void tres()
{
    int num[5], i = 0;

    for (i = 0; i < 5; i++)
    {
        num[i] = 0;
    }

    for (i = 0; i < 5; i++)
    {
        printf("o %dº numero digitado e: %d\n", i + 1, num[i]);
    }
}

/*quatro() Faça um programa que declare um vetor de vinte números inteiros.
O programa deverá atribuir em cada posição um número aleatório entre 1 e
10. Ao final seu programa deverá imprimir todos os elementos do vetor, com
suas respectivas posições.
OBS: para gerar números aleatórios utilize a função rand() da biblioteca
stdlib.h*/

void quatro()
{
    int num[20], i;

    for (i = 0; i < 10; i++)
    {
        num[i] = rand() % 10 + 1;
    }
    for (i = 0; i < 10; i++)
    {
        printf("o %dº numero e: %d\n", i, num[i]);
    }
}

/*cinco() Faça um programa que declare um vetor de vinte números inteiros.
O programa deverá atribuir em cada posição um número aleatório entre 0 e
150. Ao final seu programa deverá imprimir todos os elementos do vetor.*/

void cinco()
{
    int num[20], i;

    for (i = 0; i < 10; i++)
    {
        num[i] = rand() % 150 + 1;
    }
    for (i = 0; i < 10; i++)
    {
        printf("o %dº numero e: %d\n", i, num[i]);
    }
}

/*seis() Faça um programa que declare um vetor de vinte números inteiros. O
programa deverá atribuir em cada posição um número aleatório entre 10 e 20.
Ao final seu programa deverá imprimir todos os elementos do vetor, com suas
respectivas posições.*/

void seis()
{
    int num[20], i;

    for (i = 0; i < 10; i++)
    {
        num[i] = (rand() % 10 + 1) + 10;
    }
    for (i = 0; i < 10; i++)
    {
        printf("o %dº numero e: %d\n", i, num[i]);
    }
}

/*sete() Faça um programa que declare um vetor de 100 posições e preencha-o
com números sequenciais de 1 até 100. Imprima o vetor.*/

void sete()
{
    int num[100], i;

    for (i = 0; i < 10; i++)
    {
        num[i] = i + 1;
    }
    for (i = 0; i < 10; i++)
    {
        printf("o %dº numero e: %d\n", i, num[i]);
    }
}

/*oito() Faça um programa que declare um vetor de 10 posições e preencha-o
com números sequenciais decrescentes, iniciando em 99. Imprima o vetor.*/

void oito()
{
    int num[20], i, cont;

    for (i = 99; i > 89; i--)
    {
        num[cont] = i;
        cont++;
    }
    for (i = 0; i < 10; i++)
    {
        printf("o %dº numero e: %d\n", i, num[i]);
    }
}