#include <stdio.h>

// Faça um programa que carregue uma matriz 3x4 com números inteiros informados pelo usuário.
// Imprima a matriz, calcule e mostre a quantidade total de elementos negativos
int main()
{
    int matriz[3][4], i, j, quant = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("digite o valor da matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", matriz[i][j]);

            if (matriz[i][j] < 0)
            {
                quant++;
            }
        }
        printf("\n");
    }
    printf("quantidade de numeros negativos: %d", quant);

    return 0;
}