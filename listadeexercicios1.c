/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4
ana.fernandes8@estudante.ifms.edu.br
DATA: 21/09/2021
MATÉRIA: Construção de Algoritmos
1 - faça um algoritmo que leia um numero inteiro diferente
de zero e diga se este é positivo ou negativo
*/

// a
#include <stdio.h>

int main()
{
    int num = 1;
    while (num <= 10)
    {
        printf("%d", num);
        num++;
    }

    return 0;
}

// b
#include <stdio.h>

int main()
{
    int num = 100;
    while (num >= 80)
    {
        printf(" %d", num);
        num--;
    }

    return 0;
}

// c
#include <stdio.h>

int main()
{
    int i, num = 30;
    while (num <= 180)
    {
        printf(" %d", num);
        num = num + 10;
    }

    return 0;
}

// d
#include <stdio.h>

int main()
{
    int num = 1;
    while (num <= 10)
    {
        printf(" %d a, %d b, %d c", num, num, num);
        num++;
    }

    return 0;
}

// e
#include <stdio.h>

int main()
{
    int numero, contador = 0;
    numero = 1;
    while (numero <= 311)
    {

        if (numero % 2 == 0)
        {
            contador++;
        }
        else
        {
            printf("\n %d \n", numero);
        }
        numero++;
    }
}

// f
#include <stdio.h>

int main()
{
    int numero, contador = 0;
    numero = 1;
    while (numero <= 403)
    {
        if (numero % 4 == 0)
            printf("x");
        else
            printf(" %d ", numero);
        contador++;

        numero++;
    }
}

// g
#include <stdio.h>

int main()
{
    int num = 0;
    while (num <= 1024)
    {
        printf(" %d c, %d b, %d a", num, num, num);
        num++;
    }

    return 0;
}

// h
#include <stdio.h>
#include <math.h>

int main()
{
    int num = 2, result;

    while (1 == 1)
    {
        result = pow(2, num);
        printf("%d ", result);
        if (result == 1024)
        {
            break;
        }
        num++;
    }
}

// i
#include <stdio.h>

int main()
{
    int num = 1;
    while (num <= 50)
    {
        printf("3%d", num);
        num++;
    }
    return 0;
}

// j
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1;

    while (num <= 1000)
    {
        printf("%d\t", num);
        if (num % 5 == 0)
        {
            printf("\n");
        }
        num++;
    }
    return 0;
}

// k
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // li = linhas \ co = colunas \ num = numeros
    int li = 1, co, num = 1;

    while (li <= 15)
    {
        co = 1;
        while (co <= li)
        {
            printf("%d\t", num);
            num++;
            co++;
        }
        li++;
        printf("\n");
    }

    return 0;
}

// L
// não funciona direito
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1;
    while (num <= 30)
    {
        printf("%d\t", num);
        if (num % 5 == 0)
        {
            printf("\n");
        }
        printf("%d0\t", num);
        num++;
    }
    return 0;
}

// m
#include <stdio.h>

int main()
{
    int num = 1;
    while (num <= 100)
    {
        printf(" %d\t %d0\t %d00\t %d000\t \n", num, num, num);
        num++;
    }
    return 0;
}