#include <stdio.h>
#include <stdlib.h>
void um()
{
    int idade[50];
    int nasc_cientista[20];
    float salario[30];
    float alt_estudantes[100];
    float temp_diaria[7];
    float temp_caldeira[48];
    float notas_estudantes[30];
    float notas_estudantes_provas[75];
    float coef_redimento_estudantes[25];
    int quant_familia[20];
    int ano_nasc[20];
    float consumo_gasolina[20];
    float gastos_diario[365];
    float vazao_litros[5];
    float vol_pressao[20];
}

/*dois() Faça um programa que declare um vetor de cinco números inteiros. O
usuário deve informar, um a um, todos os valores a serem armazenados no
vetor. Ao final seu programa deverá imprimir todos os elementos do vetor.*/

void dois(){
    int num[5], i;
    
   
    for(i=0;i<5;i++){
        printf("digite o %dº numero: ", i+1);
        scanf("%d", &num[i]);
    }
    
    for(i=0;i<5;i++){
        printf("o %dº numero digitado e: %d\n", i+1, num[i]);
    }
}

/*tres() Faça um programa que declare um vetor de cinco números inteiros.
Inicialize todas as posições do vetor com o valor zero e imprima o vetor.*/

void tres(){
    int num[5], i=0;

    for(i=0;i<5;i++){
        num[i]=0;
    }
    
    for(i=0;i<5;i++){
        printf("o %dº numero digitado e: %d\n", i+1, num[i]);
    }
}

/*quatro() Faça um programa que declare um vetor de vinte números inteiros.
O programa deverá atribuir em cada posição um número aleatório entre 1 e
10. Ao final seu programa deverá imprimir todos os elementos do vetor, com
suas respectivas posições.
OBS: para gerar números aleatórios utilize a função rand() da biblioteca
stdlib.h*/

void quatro(){
    int num[20], i;

    for(i=0; i<10; i++){
        printf("digite o numero: ");
        scanf("%d", &num[i]);
    }
    for(i=0; i<10; i++){
        num[rand()];
    }
}

/*cinco() Faça um programa que declare um vetor de vinte números inteiros.
O programa deverá atribuir em cada posição um número aleatório entre 0 e
150. Ao final seu programa deverá imprimir todos os elementos do vetor.*/

/*seis() Faça um programa que declare um vetor de vinte números inteiros. O
programa deverá atribuir em cada posição um número aleatório entre 10 e 20.
Ao final seu programa deverá imprimir todos os elementos do vetor, com suas
respectivas posições.*/

/*sete() Faça um programa que declare um vetor de 100 posições e preencha-o
com números sequenciais de 1 até 100. Imprima o vetor.*/

/*oito() Faça um programa que declare um vetor de 10 posições e preencha-o
com números sequenciais decrescentes, iniciando em 99. Imprima o vetor.*/

/*main() O usuário informa um número e executa-se o procedimento referente
àquele número.*/

