// Veja na figura a seguir um exemplo do que seu programa deve fazer.
// Seu programa deve ler a tabela de distâncias entre as cidades (código fornecido
// abaixo) e gerar uma tabela com as distâncias conforme figura. Deverá apresentar o
// código e o nome das cidades disponíveis.
// O usuário fornecerá os códigos das cidades de origem e destino e o programa
// apresentará a distância entre estas cidades.
// Seu programa deverá apresentará também a cidade com maior distância da
// origem (vide figura).
// Seu programa deverá repetir até que o usuário forneça duas cidades iguais
// (origem e destino).

#include <stdio.h>
#include <string.h>

#define CIDADES 4

void print_cidade();
void print_cidade_especifica();

int main()
{
    char cidade[CIDADES][12] = {"BELEM", "FORTALEZA", "MANAUS", "PORTO VELHO"};
    int distancia[CIDADES][CIDADES] =
        {{0, 1611, 5298, 4397},
         {1611, 0, 5763, 4865},
         {5298, 5763, 0, 901},
         {4397, 4865, 901, 0}};
    int i, j, origem, destino;

    //tabela de distancias
    printf("\n            TABELA DE DISTANCIAS            ");
    printf("\n============================================\n");
    printf("ORIGEM\t\tDESTINO\t\tDISTANCIA");
    printf("\n============================================\n");
    for (i = 0; i < CIDADES; i++)
    {
        for (j = 0; j < CIDADES; j++)
        {
            print_cidade(cidade[i]);
            if (i == 0 || i == 2)
            {
                printf("\t\t");
            }
            else
            {
                printf("\t");
            }
            print_cidade(cidade[j]);
            if (j == 0 || j == 2)
            {
                printf("\t\t");
            }
            else
            {
                printf("\t");
            }
            if (distancia[i][j] == 0)
            {
                printf("---------");
            }
            else
            {
                printf("%d", distancia[i][j]);
            }

            printf("\n");
        }
    }
    printf("============================================\n");

    //codigos das cidades
    printf("\nCodigos das cidades: ");
    printf("\n====================\n");
    for (i = 0; i < CIDADES; i++)
    {
        printf("%d - ", i);
        print_cidade(cidade[i]);
        printf("\n");
    }

    do
    {
        //codigos das cidades de origem e destino
        printf("\nCodigo da cidade de origem: ");
        scanf("%d", &origem);
        printf("Codigo da cidade de destino: ");
        scanf("%d", &destino);

        if (origem != destino)
        {
            printf("Distancia entre ");
            print_cidade_especifica(cidade, origem);
            printf(" e ");
            print_cidade_especifica(cidade, destino);
            printf(" e de %d km\n", distancia[origem][destino]);

            int maior = 0;
            j = 0;
            for (i = 0; i < CIDADES; i++)
            {
                if (distancia[origem][i] > maior)
                {
                    maior = distancia[origem][i];
                    j = i;
                }
            }
            printf("\nA cidade mais distante de ");
            print_cidade_especifica(cidade, origem);
            printf(" e ");
            print_cidade(cidade[j]);
            printf(". Elas se distaciam por %d km\n", maior);
        }
        else
        {
            printf("A cidade de origem e de destino sao iguais");
        }

    } while (origem != destino);

    return 0;
}

void print_cidade(char cidade[])
{
    printf("%s", cidade);
}

void print_cidade_especifica(char cidade[][12], int i)
{
    printf("%s", cidade[i]);
}