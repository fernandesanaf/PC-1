#include <stdio.h>
#include <stdlib.h>

// Veja na figura a seguir um exemplo do que seu programa deve fazer.
// Faça um programa que receba as notas de 15 estudantes em cinco provas diferentes e armazene-as em uma matriz 15x5.
// Para facilitar gere notas aleatórias – rand()%101/10.0. Daí:
// a) Imprima todos os elementos da matriz;
// b) Declare também dois vetores de 15 posições. A
// partir dos dados da matriz armazene no primeiro vetor a
// média aritmética das provas e no segundo apenas um
// inteiro que representa a situação do estudante (1 =
// Aprovado, 0 = Reprovado). Para ser aprovado o estudante
// necessita obter média 5.
// c) Para todos os estudantes, imprima o número do
// estudante, seguido de suas notas, média das notas e
// situação.
// d) Imprima o número de estudantes, o número de
// aprovados e o número de reprovados.

int main(){
    float notas[15][5], media[15], soma;
    int i, j, situacao[15], reprovados = 0, aprovados = 0;

    for (i = 0; i < 15; i++){
        for (j = 0; j < 5; j++){
            notas[i][j] = rand()%101/10.0;
        }
    }

    // a)
    printf("\nNotas\n");
    for (i = 0; i < 15; i++){
        for (j = 0; j < 5; j++){
            printf("%.2f\t", notas[i][j]);
        }
        printf("\n");
    }

    // b)
    for (i = 0; i < 15; i++){
        soma = 0;

        for (j = 0; j < 5; j++){
            soma += notas[i][j];
        }

        media[i] = soma/5;

        if(media[i] < 5){
            situacao[i] = 0;
            reprovados++;
        }
        else{
            situacao[i] = 1;
            aprovados++;
        }
    }
    
    // c)
    printf("#\tNota 1\tNota 2\tNota 3\tNota 4\tNota 5\tMedia\tSituacao \n");

    for (i = 0; i < 15; i++){
        printf("%d\t", i+1);
        for (j = 0; j < 5; j++){
            printf("%.2f\t", notas[i][j]);
        }
        printf("%.2f\t", media[i]);
        if (situacao[i] == 0){
            printf("Reprovado");
        }
        else{
            printf("Aprovado");
        }
        printf("\n");
    }
    
    // d)
    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);
    return 0;
}