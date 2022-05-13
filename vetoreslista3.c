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
    int numeros[8], contador = 0, posicao1, posicao2, soma;

    printf("Entre com os numeros:\n");

    for (contador = 0; contador <= 7; contador++){

        printf("Entre com o %d° numero: ", contador);
            scanf("%d", &numeros[contador]);
    }

    printf("Entre com a 1° posicao para somar: ");
            scanf("%d", &posicao1);

    printf("Entre com o 2° posicao para somar: ");
            scanf("%d", &posicao2);

    printf("\n");

    for(contador = 0; contador <= 7; contador++){
        if (posicao1 == contador){
            soma = numeros[contador];
            printf("Posicao %d contemo numero: %d\n",posicao1, numeros[contador]);
        }
        if (posicao2 == contador){
            soma = soma + numeros[contador];
            printf("Posicao %d contemo numero: %d\n",posicao2, numeros[contador]);
        }
    }

    printf("\n");

    printf("A soma é: %d\n", soma);

}

// quatro() Leia um vetor de tamanho informado pelo usuário e
// um número x. Procure por x no vetor e exiba todos os índices
// em que x se encontra no vetor. Caso x não pertencer ao vetor
// uma mensagem de erro deve apresentada para o usuário.
void quatro(){
    int tamanho = 0, entrada, contador, randon, teste = 0;

    printf("Entre com o tamanho do vetor: ");
        scanf("%d", &tamanho);

    tamanho = tamanho - 1;

    int numeros[tamanho];

    printf("Entre com o valor maximo para numeros aleatórios: ");
        scanf("%d", &randon);

    printf("Entre com o numero da pesquisa: ");
        scanf("%d", &entrada);

    printf("\n");

    for(contador = 0; contador <= tamanho; contador++){
        numeros[contador] = rand() % randon;
    }


    for(contador = 0; contador <= tamanho; contador++){
        numeros[contador] = rand() % randon;
    }

    for(contador = 0; contador <= tamanho; contador++){ 
            printf("Posição %d: %d\n",contador, numeros[contador]);
    }

    printf("\n");

    for(contador = 0; contador <= tamanho; contador++){
        if(entrada == numeros[contador]){
            printf("Tem o numero %d na posicao %d\n", entrada, contador);
            teste = 1;
        }
    }

    if(teste == 0){
         printf("Nao tem o numero %d no vetor\n", entrada);
    }
}

// cinco() Crie um vetor v de 15 números inteiros. Inicialize v
// com números aleatórios entre 20 e 50. Para cada número n
// presente em v apresente todas as posições em que n se encontra
// em v.
void cinco(){
    int numeros[15], contador, entrada;

    for(contador = 0; contador <= 14; contador++){
        numeros[contador] = (rand() % 20) + 30;
    }

    printf("Entre com o numero (20 a 50): ");
        scanf("%d", &entrada);

    for(contador = 0; contador <= 14; contador++){
        if(entrada == numeros[contador]){
            printf("Tem o numero %d na posicao %d\n", entrada, contador);
        }
    }
}
// seis() Crie um vetor v de 10 números inteiros. Inicialize v
// com números aleatórios entre 1 e 5. Faça um programa que
// forneça uma saída análoga ao da seguente figura de exemplo.
// Não crie outros vetores.
void seis(){
        int numeros[10], contador, contador2 = 0, aux = 0;

    for(contador = 0; contador <= 9; contador++){
        numeros[contador] = (rand() % 5) + 1;
    }

    printf("V |");
    for(contador = 0; contador <= 9; contador++){
        printf("%d\t", numeros[contador]);
    }

    printf("\n");

    for(contador2 = 0; contador2 <= 4; contador2++){

        printf("\n");
        printf("%d |", contador2+1);
        aux = contador2+1;

        for(contador = 0; contador <= 9; contador++){
            if(aux == numeros[contador]){
                printf("X\t");
            }else{
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
int numeros[10], contador, contador2 = 0, aux = 0;

    for(contador = 0; contador <= 9; contador++){
        numeros[contador] = (rand() % 5) + 1;
    }

    printf("V |");
    for(contador = 0; contador <= 9; contador++){
        printf("%d\t", numeros[contador]);
    }

    printf("\n");

    for(contador2 = 0; contador2 <= 4; contador2++){

        printf("\n");
        printf("%d |", contador2+1);
        aux = contador2+1;

        for(contador = 0; contador <= 9; contador++){
            if(aux == numeros[contador]){
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
int numeros[10], contador;
    char letras[5], letras_saida[10];

    for(contador = 0; contador <= 9; contador++){
        numeros[contador] = (rand() % 5) + 1;
    }

    for(contador = 0; contador <= 4; contador++){
        printf("Entre com as letras:");
            scanf("%s", &letras[contador]);
    }

    printf("\n");
    printf("V  |");
    for(contador = 0; contador <= 9; contador++){
        printf("%d\t", numeros[contador]);
    }

    printf("\n");
    printf("V2 |");
    for(contador = 0; contador <= 4; contador++){
        printf("%c\t", letras[contador]);
    }

    for(contador = 0; contador <= 9; contador++){
        letras_saida[contador] = letras[numeros[contador]-1];
    }

    printf("\n");
    printf("V3 |");
    for(contador = 0; contador <= 9; contador++){
        printf("%c\t", letras_saida[contador]);
    }

    printf("\n");
}