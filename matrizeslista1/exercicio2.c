#include <stdio.h>

// Faça um programa que carregue uma matriz 2x4 com números inteiros, calcule e mostre:
// - a quantidade de elementos negativos em cada linha;
// - a média dos elementos em cada linha da matriz;
// - a média dos elementos em cada coluna da matriz;

int main()
{
    int matriz[2][4], i, j, quant_negativos;
    float media_linha, media_coluna, soma;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("digite o valor da matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 2; i++)
    {
        quant_negativos = 0;
        for (j = 0; j < 4; j++)
        {

            if (matriz[i][j] < 0)
            {
                quant_negativos++;
            }
        }
        printf("\n numeros negativos na linha %d: %d", i, quant_negativos);
    }

    printf("\n");

    for (i = 0; i < 2; i++)
    {
        soma = 0;

        for (j = 0; j < 4; j++)
        {
            soma = soma + matriz[i][j];
        }

        media_linha = soma / 4;
        printf("\n media da linha %d: %.2f", i, media_linha);
    }
    printf("\n");
    for (i = 0; i < 4; i++)
    {
        soma = 0;

        for (j = 0; j < 2; j++)
        {
            soma += matriz[j][i];
        }
        media_coluna = soma / 2;
        printf("\n media da coluna %d: %.2f", i, media_coluna);
    }

    return 0;
}