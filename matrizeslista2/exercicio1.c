#include <stdio.h>
#include <string.h>

#define CIDADES 4

void imprime_cidade();
void imprime_cidade_especifica();

int main()
{
    char cidade[CIDADES][12] = {"BELEM", "FORTALEZA", "MANAUS", "PORTO VELHO"};
    int distancia[CIDADES][CIDADES] =
        {{0, 1611, 5298, 4397},
         {1611, 0, 5763, 4865},
         {5298, 5763, 0, 901},
         {4397, 4865, 901, 0}};
    int i, j, origem, destino;

    // Exibindo a tabela de dist�ncias
    printf("\n            TABELA DE DISTANCIAS            ");
    printf("\n============================================\n");
    printf("ORIGEM\t\tDESTINO\t\tDISTANCIA");
    printf("\n============================================\n");
    for (i = 0; i < CIDADES; i++)
    {
        for (j = 0; j < CIDADES; j++)
        {
            imprime_cidade(cidade[i]);
            if (i == 0 || i == 2)
            {
                printf("\t\t");
            }
            else
            {
                printf("\t");
            }
            imprime_cidade(cidade[j]);
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

    // Exibindo os c�digos das cidades para o usu�rio
    printf("\nCodigos das cidades: ");
    printf("\n====================\n");
    for (i = 0; i < CIDADES; i++)
    {
        printf("%d - ", i);
        imprime_cidade(cidade[i]);
        printf("\n");
    }

    do
    {
        // Lendo os c�digos das cidades de origem e destino
        printf("\nCodigo da cidade de origem: ");
        scanf("%d", &origem);
        printf("Codigo da cidade de destino: ");
        scanf("%d", &destino);

        if (origem != destino)
        {
            // Imprimindo a dist�ncia entre as cidades:
            printf("Distancia entre ");
            imprime_cidade_especifica(cidade, origem);
            printf(" e ");
            imprime_cidade_especifica(cidade, destino);
            printf(" e de %d km\n", distancia[origem][destino]);

            // Encontrando a cidade mais distante
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
            imprime_cidade_especifica(cidade, origem);
            printf(" e ");
            imprime_cidade(cidade[j]);
            printf(". Elas distam %d km\n", maior);
        }
        else
        {
            printf("A cidade de origem e de destino sao iguais. Fim da execucao.");
        }

    } while (origem != destino);

    return 0;
}

void imprime_cidade(char cidade[])
{
    printf("%s", cidade);
}

void imprime_cidade_especifica(char cidade[][12], int i)
{
    printf("%s", cidade[i]);
}