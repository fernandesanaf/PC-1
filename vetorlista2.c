#include <stdio.h>
#include <stdlib.h>

void um();
void dois();
void tres();
void quatro();

int main(){
            int opcao;

        printf("-----------------------------------------------------------\n");
        printf("1 - UM      | 3 - TRES  \n");
        printf("2 - DOIS    | 4 - QUATRO \n");
        printf("-----------------------------------------------------------\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            um();
            break;

        case 2:
            dois();
            break;

        case 3:
            tres();
            break;

        case 4:
            quatro();
            break;

        default:
            printf("Valor Incorreto");
            break;
        }
    return 0;
}

// um() Faça um programa que declare um vetor de sete números
// inteiros. O usuário deve informar, na sequência inversa das
// posições, os valores a serem armazenados.
// Ao final seu programa deverá imprimir todos os elementos do
// vetor, com suas respectivas posições.

void um(){
    int num[7], i;
    
    printf("digite na sequencia inversa\n");
    for(i=7;i>0;i--){
        printf("digite o %dº numero: ", i);
        scanf("%d", &num[7-i]);
    }
    
    for(i=0;i<7;i++){
        printf("o %dº numero digitado e: %d\n", i, num[i]);
    }

    return 0;
}

// dois() Faça um programa que declare um vetor de seis números
// inteiros. Inicialize todas as posições do vetor com o valor
// zero. O usuário deverá povoar o vetor em qualquer ordem. Para
// tal seu programa deverá solicitar as posições (índices) e os
// valores a serem inseridos nas respectivas posições. Ao final
// seu programa deverá imprimir todos os elementos do vetor, com
// suas respectivas posições.

void dois(){
    int num[6], i;
    
    for(i=0;i<6;i++){
        num[i]=0;
    }
    
    for(i=0;i<6;i++){
        // printf("o %dº numero digitado e: %d\n", i+1, num[i]);
            printf("digite o indice que deseja preencher: ");
            scanf("%d",&i);
            printf("digite o numero que deseja colocar no vetor");
            scanf("%d",&num[i]);

    }

    for(i=0;i<6;i++){
        printf("%d",num[i]);
    }

    return 0;
}

// tres() Faça um programa que declare um vetor de vinte
// números inteiros.
// O programa deverá atribuir em cada posição um número aleatório
// entre 1 e 10. Verifique a existência de elementos iguais a 7,
// mostrando as posições que esses elementos apareceram.


// quatro() Faça um programa que declare um vetor de vinte
// números inteiros.
// O programa deverá atribuir em cada posição um número aleatório
// entre 1 e 10.
// Calcule e mostre:
// • A quantidade de números pares;
// • A posição dos números pares;
// • A quantidade de números ímpares;
// • A posição dos números ímpares;


// main() O usuário informa um número e executa-se o
// procedimento referente àquele número.