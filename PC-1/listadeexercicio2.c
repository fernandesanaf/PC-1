/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes
ana.fernandes8@estudante.ifms.edu.br
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

//procedimentos:
void dobro();
void maior();
void maior_500();
void entre_10_50();
void entre_x_y();
void calc (float num1, float num2, char operacao);

// funçoes
int triplo();
int menor();
void aleatorios();
void aleatorios_quant();
float soma(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float divisao(float num1, float num2);
// int testa_calc(int i, int n, char op);


/* dobro(), maior(), maior_500(), entre_10_50(), aleatorios(), aleatórios_quant(), calc(float x, float y, char cont) */
int main(){
    int opcao, i, n, x;
    float num1, num2, c1, c2, c3, c4; 

        printf("-----------------------------------------------------------\n");
        printf("1 - MAIOR      | 6 - ENTRE 10 E 50  \n");
        printf("2 - MAIOR QUE 500	     	| 7 - ENTRE X E Y \n");
        printf("3 - MENOR	        | 8 - ALEATÓRIOS \n");
        printf("4 - DOBRO	        | 9 - ALEATÓRIOS 2\n");
        printf("5 - TRIPLO    	        | 10 -  CALCULADORA \n");
        // printf("              	        | 11 -  TESTE CALCULADORA \n");
        printf("-----------------------------------------------------------\n");
        printf("Escolha: ");
        scanf("%d" , &opcao);

        switch(opcao){
            case 1:
                maior();
                break;

            case 2:
                maior_500();
                break;

            case 3:
                printf("digite um numero: %d", menor());
                break;

            case 4:
                dobro();
                break;

            case 5:
                printf("o triplo do numero: %d", triplo());
                break;

            case 6:
                entre_10_50();
                break;

            case 7:
                entre_x_y();
                break;

            case 8:
                aleatorios();
                break;

            case 9:
                printf ("digite um numero: ");
                scanf("%d", &x);
                aleatorios_quant(x);
                break;

            case 10:
                printf("\n\ncalc() recebe dois numeros reais E um caractere que representa o calculo a relizar: '+', '-', '*' ou '/'. Faça chamadas para as funcoes anteriores e retorne o valor correto dependendo da operacao.\n");

                char operacao;

                printf("Entre com o Primeiro numero: ");
                    scanf("%f", &num1);

                printf("Entre com o Segundo numero: ");
                    scanf("%f", &num2);

                printf("Escolha a operacao matematica:\n");
                printf("SOMA: + \t SUBTRACAO: - \t MULTIPLICACAO: * \t DIVISAO: /\nEscolha: ");
                    scanf("%s" , &operacao);

                calc(num1 , num2 , operacao);
            break;

            // case 11:
            //         printf("digite um numero: ");
            //         scanf("%d", &n);
            //         printf("\nSOMA \t\tSUB \t\tMULT \t\tDIV\n");

            //         for (i=1; i<=10; i++){
            //         c1 = testa_calc(i, n, '+');
            //         c2 = testa_calc(i, n, '-');
            //         c3 = testa_calc(i, n, '*');
            //         c4 = testa_calc(i, n, '/');

            //     printf("%f \t%f \t%f \t%f \n", c1, c2, c3, c4);

            //     }
            //     break;

                //OPCAO INVALIDA
            default:
                printf("Opcao Invalida !!");
        }

    return 0;
}
    //FUNÇOES
    

    

    //maior() leia dois números e imprima o valor do maior
    void maior(){
    float num1, num2;
    
    printf("digite dois nomeros: ");
    scanf("%f %f", &num1, &num2);

        if (num1 > num2){
            printf("%.2f maior que %.2f", num1, num2);
        }
        else if (num2 > num1){
            printf("%.2f maior que %.2f", num2, num1);
        }
        else{
            printf("numeros iguais");
        }
    }

    //menor() leia dois números e retorne o valor do menor
    int menor(){
    float num1, num2, menor;
    
    printf("Informe dois n�meros: ");
    scanf("%f %f", &num1, &num2);

        if (num1 < num2){
            menor = num1;
        }
        else if (num2 < num1){
            menor = num2;
        }

    return menor;
    }

    //dobro() leia um número inteiro e imprima o dobro dele
    void dobro(){
        int num, result;

        printf("digite o numero: ");
        scanf("%d",&num);
        
        result = num * 2;

        printf("dobro do numero: %d \n", result);  
    }

    // triplo() leia um número inteiro e retorne o triplo dele
    int triplo(){
    int num;

    printf("Informe um n�mero inteiro: ");
    scanf("%d", &num);

    return num * 3;
    }

    //maior_500() leia um número e imprima se ele é maior que 500 ou não
    void maior_500(){
    float num;
    
    printf("digite um nomeros: ");
    scanf("%f", &num);

        if (num > 500)
            printf("%.2f maior que 500", num);
        else if (num < 500)
            printf("%.2f maior que 500", num);
        else
            printf("numeros iguais");
    }

    //entre_10_50() imprima todos os números entre 10 e 50
    void entre_10_50(){
    int i = 10;

        while (i <= 50){
            printf("%d ", i);
            i++;
        }
    }

    //entre_x_y() receba dois números inteiros x e y e imprima todos os números entre x e y.
    void entre_x_y(){
        int x, y;

        printf("digite dois numeros: ");
        scanf("%d %d", &x, &y);

        while (x <= y){
            printf("%d ", x);
            x++;
        }
    }

    // aleatorios() leia um número n e então sorteie e imprima n números aleatórios.
    void aleatorios(){
        int num, i = 1;

        printf("digite um numero: ");
        scanf("%d", &num);

        while (i <= num){
            printf("%d ", rand());
            i++;
        }
    }

    // aleatorios_quant() receba um número X como parâmetro. Sorteie números aleatórios até que o número sorteado for igual a X. Imprima a quantidade de números sorteados.
    void aleatorios_quant(){

        int numero_aleatorio;
        
        printf("Entre com o numero: ");
            scanf("%d", &numero_aleatorio);

        while(numero_aleatorio != rand()){
            printf("%d " , rand());
        }
        printf("\n");
    }
    //(soma() receba dois números reais e retorne a soma deles
    float soma(float num1, float num2){
        float soma;
        soma = num1 + num2;
        return soma;
    }

    // sub() receba dois números reais e retorne a subtração do primeiro pelo segundo
    float sub(float num1, float num2){
        float subtracao;
        subtracao = num1 - num2;
        return subtracao;
    }

    // mult() receba dois números reais e retorne a multiplicação deles
    float mult(float num1, float num2){
        float multiplicacao;
        multiplicacao = num1 * num2;
        return multiplicacao;
    }

    // div() receba dois números reais e retorne a divisão do primeiro pelo segundo
    float divisao(float num1, float num2){
        float divisao;
        divisao = num1 / num2;
        return divisao;
    }

    // calc() recebe dois números reais E um caractere que representa o cálculo a
    // relizar: '+', '-', '*' ou '/'. Faça chamadas para as funções anteriores
    // e retorne o valor correto dependendo da operação.
    void calc(float num1, float num2, char operacao){

        float resultado;              

        switch(operacao){

            case '+':
                resultado = soma(num1 , num2);
                printf("%.f + %.f = %.f\n", num1 , num2 , resultado);
            break;

            case '-':
                resultado = sub(num1 , num2);
                printf("%.f - %.f = %.f\n", num1 , num2 , resultado);
            break;

            case '*':
                resultado = mult(num1 , num2);
                printf("%.f * %.f = %.f\n", num1 , num2 , resultado);
            break;

            case '/':
                resultado = divisao(num1 , num2);
                printf("%.f / %.f = %.f\n", num1 , num2 , resultado);
            break;

            default:
                printf("Opcao Invalida !!");
         }
    }

    // int testa_calc(int i, int n, char operacao){

    //     int resultado;              

    // switch(operacao){

    //         case '+':
    //             resultado = soma(i , n);
    //             return resultado;
    //         break;

    //         case '-':
    //             resultado = sub(i , n);
    //             return resultado;
    //         break;

    //         case '*':
    //             resultado = mult(i , n);
    //             return resultado;
    //         break;

    //         case '/':
    //             resultado = divisao(i , n);
    //             return resultado;
    //         break;
    //      }
    // }