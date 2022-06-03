#include <stdio.h>

// Faça um programa que leia um vetor contendo 15 elementos.
//  A seguir distribua esses elementos em uma matriz 3x5.
//  Ao final mostre o vetor e a matriz gerada.
//  Veja a seguir um exemplo do que seu programa deve fazer

int main()
{
    int vetor[15], matriz[3][5], i, j, cont = 0;

    for (i = 0; i < 15; i++)
    {
        printf("digite o %d valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matriz[i][j] = vetor[cont];
            cont++;
        }
    }

    printf("\nVETOR\n");
    for (i = 0; i < 15; i++)
    {
        printf("%d\t", vetor[i]);
    }

    printf("\n\nMATRIZ\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}