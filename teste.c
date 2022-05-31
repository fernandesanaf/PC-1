#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
    int num[10], i;
    char letras[5], letras_saida[10];

    for(i = 0; i <= 9; i++){
        num[i] = (rand() % 5) + 1;
    }

    for(i = 0; i <= 4; i++){
        printf("digite as letras:");
            scanf("%s", &letras[i]);
    }

    printf("\n");
    printf("V  |");
    for(i = 0; i <= 9; i++){
        printf("%d\t", num[i]);
    }

    printf("\n");
    printf("V2 |");
    for(i = 0; i <= 4; i++){
        printf("%c\t", letras[i]);
    }

    for(i = 0; i <= 9; i++){
        letras_saida[i] = letras[num[i]-1];
    }

    printf("\n");
    printf("V3 |");
    for(i = 0; i <= 9; i++){
        printf("%c\t", letras_saida[i]);
    }

    printf("\n");
}