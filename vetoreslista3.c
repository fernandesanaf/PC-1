// main() O usuário informa um número e executa-se o
// procedimento referente àquele número. O programa deve repetir
// até que o número 0 seja informado.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void um();
void dois();
void tres();
void quatro();
void cinco();
void seis();
void sete();
void oito();

int main()
{
    int opcao;
    setlocale(LC_ALL, "");

    printf("-----------------------------------------------------------\n");
    printf("1 - UM      | 5 - CINCO  \n");
    printf("2 - DOIS    | 6 - SEIS \n");
    printf("3 - TRÊS    | 7 - SETE \n");
    printf("4 - QUATRO  | 8 - OITO\n");
    printf("-----------------------------------------------------------\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
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

    case 5:
        cinco();
        break;

    case 6:
        seis();
        break;

    case 7:
        sete();
        break;

    case 8:
        oito();
        break;
    default:
        printf("Valor Incorreto");
        break;
    }
    return 0;
}
// um() Crie um vetor v de 15 números inteiros. Inicialize v com
// números aleatórios entre 1 e 20. Crie dois novos vetores v1 e
// v2. Copie os valores maiores que 14 de v para v1, e demais
// valores para v2. Exiba os três vetores.
void um(){
        int v[15], i, v1[15], v2[15];

    for (i = 0; i < 14; i++)
    {
        v[i] = rand() % 20 + 1;
    }

    for (i = 0; i <= 14; i++)
    {
        printf("vetor posição %d: %d\n",i, v[i]);
    }

    printf("\n");

    for (i = 0; i <= 14; i++)
    {
        if (v[i] > 14)
        {
            v1[i] = v[i];
            printf("números maiores que 14: %d\n", v1[i]);
        }
    }

    printf("\n");

    for (i = 0; i <= 14; i++)
    {
        if (v[i] < 14)
        {
            v2[i] = v[i];
            printf("números menores que 14: %d\n", v2[i]);
        }
    }
}

// dois() Crie um vetor v de 15 números inteiros. Inicialize v
// com números aleatórios entre 1 e 20. Crie dois novos vetores
// v1 e v2. Armazene em v1 as posições dos valores maiores que 12
// de v1, e em v2 as posições dos demais valores. Exiba os três
// vetores.
void dois(){
int v[15], i, v1[15], v2[15];

    for (i = 0; i < 14; i++)
    {
        v[i] = rand() % 20 + 1;
    }

    for (i = 0; i <= 14; i++)
    {
        printf("vetor posição %d: %d\n",i, v[i]);
    }

    printf("\n");

    for (i = 0; i <= 14; i++)
    {
        if (v[i] > 12)
        {
            v1[i] = v[i];
            printf("números maiores que 12: %d\n", v1[i]);
        }
    }

    printf("\n");

    for (i = 0; i <= 14; i++)
    {
        if (v[i] < 12)
        {
            v2[i] = v[i];
            printf("números menores que 12: %d\n", v2[i]);
        }
    }
}

// tres() Leia um vetor de 8 posições com valores informados
// pelo usuário, em seguida, leia também dois valores X e Y que
// representam duas posições no vetor. Escreva a soma dos valores
// armazenados no vetor nas respectivas posições X e Y.
void tres(){
    int num[8], i = 0, p1, p2, soma;

    for (i = 0; i <= 7; i++){
        printf("digite o %d numero: ", i);
        scanf("%d", &num[i]);
    }

    printf("digite a 1 posicao para somar: ");
    scanf("%d", &p1);

    printf("digite a 2 posicao para somar: ");
    scanf("%d", &p2);

    printf("\n");

    for(i = 0; i <= 7; i++){
        if (p1 == i){
            soma = num[i];
            printf("posicao %d: %d\n",p1, num[i]);
        }
        if (p2 == i){
            soma = soma + num[i];
            printf("posicao %d: %d\n",p2, num[i]);
        }
    }

    printf("\n");

    printf("soma das posicoes: %d\n", soma);
}

// quatro() Leia um vetor de tamanho informado pelo usuário e
// um número x. Procure por x no vetor e exiba todos os índices
// em que x se encontra no vetor. Caso x não pertencer ao vetor
// uma mensagem de erro deve apresentada para o usuário.
void quatro(){
    int i, todosnum, teste = 0, tamanho = 0, pesquisa;

    printf("digite o tamanho do vetor: ");
        scanf("%d", &tamanho);

    tamanho = tamanho - 1;

    int num[tamanho];

    printf("digite os numeros: ");
        scanf("%d", &todosnum);

    printf("digite o numero para pesquisar: ");
        scanf("%d", &pesquisa);

    printf("\n");

    for(i = 0; i <= tamanho; i++){
        num[i] = rand() % todosnum;
    }


    for(i = 0; i <= tamanho; i++){
        num[i] = rand() % todosnum;
    }

    for(i = 0; i <= tamanho; i++){ 
            printf("posição %d: %d\n",i, num[i]);
    }

    printf("\n");

    for(i = 0; i <= tamanho; i++){
        if(pesquisa == num[i]){
            printf("numero %d na posicao %d\n", pesquisa, i);
            teste = 1;
        }
    }

    if(teste == 0){
         printf("nao tem o numero %d no vetor\n", pesquisa);
    }
}

// cinco() Crie um vetor v de 15 números inteiros. Inicialize v
// com números aleatórios entre 20 e 50. Para cada número n
// presente em v apresente todas as posições em que n se encontra
// em v.
void cinco(){
    int num[15], i, x;

    for(i = 0; i <= 14; i++){
        num[i] = (rand() % 20) + 30;
    }

    printf("digite um numero de 20 a 50: ");
        scanf("%d", &x);

    for(i = 0; i <= 14; i++){
        if(x == num[i]){
            printf("numero %d na posicao %d\n", x, i);
        }
    }
}
// seis() Crie um vetor v de 10 números inteiros. Inicialize v
// com números aleatórios entre 1 e 5. Faça um programa que
// forneça uma saída análoga ao da seguente figura de exemplo.
// Não crie outros vetores.
void seis(){
   int num[10], i, j = 0, x = 0;

    for(i = 0; i <= 9; i++){
        num [i] = (rand() % 5) + 1;
    }

    printf("V |");
    for(i = 0; i <= 9; i++){
        printf("%d\t", num [i]);
    }

    printf("\n");

    for(j = 0; j <= 4; j++){

        printf("\n");
        printf("%d |", j+1);
        x = j+1;

        for(i = 0; i <= 9; i++){
            if(x == num =[i]){
                printf("X\t");
            }
            else{
                printf(" \t");
            }
        }
    }

    printf("\n");     

}
// sete() Crie um vetor v de 10 números inteiros. Inicialize v
// com números aleatórios entre 1 e 5. Faça um programa que
// forneça uma saída análoga ao da seguente figura de exemplo.
// Não crie outros vetores.
void sete(){
    int num[10], i, j = 0, x = 0;

    for(i = 0; i <= 9; i++){
        num [i] = (rand() % 5) + 1;
    }

    printf("V |");
    for(i = 0; i <= 9; i++){
        printf("%d\t", num [i]);
    }

    printf("\n");

    for(j = 0; j <= 4; j++){

        printf("\n");
        printf("%d |", j+1);
        x = j+1;

        for(i = 0; i <= 9; i++){
            if(x == num =[i]){
                printf("X");
            }
        }
    }

    printf("\n");
    
}
// oito() Crie um vetor v de 10 números inteiros. Inicialize v
// com números aleatórios entre 1 e 5. Crie um vetor v2 de 5
// caracteres. O usuário deve informar cada valor de v2. Faça um
// programa que Armazene em um vetor v3 uma saída análoga ao da
// seguinte figura de exemplo. Apresente o vetor v3.
void oito(){
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
