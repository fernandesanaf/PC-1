#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// tres() Leia um vetor de 8 posições com valores informados
// pelo usuário, em seguida, leia também dois valores X e Y que
// representam duas posições no vetor. Escreva a soma dos valores
// armazenados no vetor nas respectivas posições X e Y.

int main()
{
    int numeros[8], i = 0, p1, p2, soma;

    printf("Entre com os numeros:\n");

    for (i = 0; i <= 7; i++)
    {
        printf("Entre com o %d° numero: ", i);
        scanf("%d", &numeros[i]);
    }

    printf("Entre com a 1° posicao para somar: ");
    scanf("%d", &p1);

    printf("Entre com o 2° posicao para somar: ");
    scanf("%d", &p2);

    printf("\n");

    for (i = 0; i <= 7; i++)
    {
        if (p1 == i)
        {
            soma = numeros[i];
            printf("Posicao %d, numero: %d", numeros[i]);
        }
        if (p2 == i)
        {
            soma = soma + numeros[i];
            printf("Posicao %d,numero: %d\n", p2, numeros[i]);
        }
    }

    printf("\n");

    printf("A soma é: %d\n", soma);
}