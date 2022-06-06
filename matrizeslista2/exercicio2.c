//  Veja na figura a seguir um exemplo do que seu programa deve fazer:
// Declare uma matriz 6x6 e Armazene um número aleatório em cada elemento da
// matriz. Daí:
// - Imprima todos os elementos da matriz;
// - Imprima os índices das posições na matriz;
// - Imprima todos os elementos da diagonal principal (um ao lado do outro);
// - Imprima todos os elementos da diagonal principal;
// - Imprima todos os elementos da diagonal principal e zero nas demais posições;
// - Imprima todos os elementos acima da diagonal principal.

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 6

void print_elementos();
void print_indices();
void print_lado_a_lado();
void print_principal();
void print_diagonal_e_zero();
void print_diagonal_e_cima();

int main()
{
    int op = 1, i, j, num[TAMANHO][TAMANHO];

    for (i = 0; i < TAMANHO; i++)
    {
        for (j = 0; j < TAMANHO; j++)
        {
            num[i][j] = rand();
        }
    }

    printf("\n========================================================================\n");
    printf("                    Tabela de opcoes para impressao:                    ");
    printf("\n========================================================================");
    printf("\n1 - Todos os elementos da matriz");
    printf("\n2 - Os indices das posicoes na matriz");
    printf("\n3 - Todos os elementos da diagonal principal (um ao lado do outro)");
    printf("\n4 - Todos os elementos da diagonal principal (na diagonal)");
    printf("\n5 - Todos os elementos da diagonal principal e zero nas demais posicoes");
    printf("\n6 - Todos os elementos acima da diagonal principal");
    printf("\n========================================================================\n");

    while (op > 0 && op < 7)
    {
        printf("\nEscolha uma das opccoes da tabela: ");
        scanf("%d", &op);
        printf("\n");

        switch (op)
        {
        case 1:
            print_elementos(num);
            break;
        case 2:
            print_indices();
            break;
        case 3:
            print_lado_a_lado(num);
            break;
        case 4:
            print_principal(num);
            break;
        case 5:
            print_diagonal_e_zero(num);
            break;
        case 6:
            print_diagonal_e_cima(num);
            break;

        default:
            printf("Essa nao e uma das opcoes aceitas!");
            break;
        }
    }

    return 0;
}

// imprime todos os elementos da matriz
void print_elementos(int num[TAMANHO][TAMANHO])
{
    int i, j;
    printf("Imprime todos os elementos da matriz: \n");
    for (i = 0; i < TAMANHO; i++)
    {
        for (j = 0; j < TAMANHO; j++)
        {
            printf("%d\t", num[i][j]);
        }
        printf("\n");
    }
}

// mprime os indices das posicoes na matriz;
void print_indices()
{
    int i, j;
    printf("Imprime os indices das posicoes na matriz: \n");
    for (i = 0; i < TAMANHO; i++)
    {
        for (j = 0; j < TAMANHO; j++)
        {
            printf("%d %d\t", i, j);
        }
        printf("\n");
    }
}

// imprime todos os elementos da diagonal principal (um ao lado do outro);
void print_lado_a_lado(int num[TAMANHO][TAMANHO])
{
    int i, j;
    printf("Imprime todos os elementos da diagonal principal: \n");
    for (i = 0; i < TAMANHO; i++)
    {
        for (j = 0; j < TAMANHO; j++)
        {
            if (i == j)
            {
                printf("%d\t", num[i][j]);
            }
        }
    }
    printf("\n");
}

// imprime todos os elementos da diagonal principal;
void print_principal(int num[TAMANHO][TAMANHO])
{
    int i, j;
    printf("Imprime todos os elementos da diagonal principal: \n");
    for (i = 0; i < TAMANHO; i++)
    {
        for (j = 0; j < TAMANHO; j++)
        {
            if (i == j)
            {
                printf("%d\t", num[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

// imprime todos os elementos da diagonal principal e zero nas demais posicoes;
void print_diagonal_e_zero(int num[TAMANHO][TAMANHO])
{
    int i, j;
    printf("Imprime todos os elementos da diagonal principal e zero nas demais posicoes: \n");
    for (i = 0; i < TAMANHO; i++)
    {
        for (j = 0; j < TAMANHO; j++)
        {
            if (i == j)
            {
                printf("%d\t", num[i][j]);
            }
            else
            {
                printf("0\t");
            }
        }
        printf("\n");
    }
}

//imprime todos os elementos acima da diagonal principal
void print_diagonal_e_cima(int num[TAMANHO][TAMANHO])
{
    int i, j;
    printf("Imprime todos os elementos acima da diagonal principal: \n");
    for (i = 0; i < TAMANHO; i++)
    {
        for (j = 0; j < TAMANHO; j++)
        {
            if (j > i)
            {
                printf("%d\t", num[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}