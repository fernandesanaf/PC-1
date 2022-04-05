/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes
ana.fernandes8@estudante.ifms.edu.br
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
        printf("\n");
        num++;
    }
    return 0;
}

//n
#include <stdio.h>
#include <stdlib.h>
   
int main(){
    int num1, num2;
    printf("digite o primeiro número: ");
    scanf("%d", &num1);
    printf("digite o segundo número: ");
    scanf("%d", &num2);
    
    if(num1 < num2){
        printf("número menor é: %d", num1);
    }else{
        printf("número menor é: %d", num2);
    }
    return 0;
}
//o
#include <stdio.h>
#include <stdlib.h>
   
int main(){
    int num1, num2 , num3;
    printf("digite o primeiro número: ");
    scanf("%d", &num1);
    printf("digite o segundo número: ");
    scanf("%d", &num2);
    printf("digite o terceiro número: ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){
        printf("%d", num1);
    }
    else if(num2 > num1 && num2 > num3){
        printf("%d", num2);
    }
    else{
        printf("%d", num3);
    }
    return 0;
}
//p
#include <stdio.h>
#include <stdlib.h>
   
int main(){
    int numa, numb, x;

    printf("digite o número A: ");
    scanf("%d", &numa);
    
    printf("Edigite o número B: ");
    scanf("%d", &numb);

    printf("numeros originais A = %d e B = %d \n", numa , numb);
    printf("números invertidos A = %d e B = %d", numb , numa);

    return 0;
}
//q
#include <stdio.h>
#include <stdlib.h>
   
int main(){
    float nota1, nota2, tipo, valor, quant, result, meia;
    
    printf("digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("digite o tipo de ingresso: \n");
    printf("1 para inteira 2 para meia entrada");
    scanf("%f", &tipo);
    printf("digite o valor do ingresso: ");
    scanf("%f", &valor);
    printf("digite a quantidade de ingressos: ");
    scanf("%f", &quant);
    
    if(nota1 < nota2){
        printf("nota menor é: %f\n", nota1);
    }else{
        printf("nota menor é: %f\n", nota2);
    }
    
    if(tipo == 1){
        result = valor * quant;
        printf("o valor a ser pago é:  %f\n", result);
    }
    
    if(tipo == 2){
        meia = valor / 2;
        result = meia * quant;
        printf("o valor a ser pago é: R$ %.2f\n", result);
    }
    return 0;
}
//r
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float valora;
    float valorb;
    float valorc;
    float delta;
    float x1;
    float x2;

    printf("equação de segundo grau\n");
    printf("digite o valor de A: ");
    scanf("%f" , &valora);
    printf("digite o valor de B: ");
    scanf("%f" , &valorb);
    printf("digite o valor de C: ");
    scanf("%f" , &valorc);

    delta = (valorb*valorb) - (4*valora*valorc);
    if (delta < 0) 
    {
      printf("delta <= 0");
    }else{  
        x1 = ((-valorb) + sqrt(delta)) / (2*valora);
        x2 = ((-valorb) - sqrt(delta)) / (2*valora);
        printf("x1: %.2f \nx2: %.2f" , x1 , x2);
    } 
  return 0;
}
//s
#include <stdio.h>
#include <stdlib.h>
   
int main(){
       
    int paciente = 0, quant;
    float kg, imc, altura;

    printf("digite a quantidade de pessoas: ");
    scanf("%d" , &quant);
    
    while (paciente < quant)
    {
        printf("digite o peso: ");
        scanf("%f", &kg);
        printf("digite a altura em metros: ");
        scanf("%f", &altura);

        imc = (kg / (altura * altura));

        if(imc < 18.5){
            printf("imc de %.1f é abaixo do peso\n\n", imc);
        }else if(imc > 18.5 && imc < 24.9){
            printf("imc de %.1f é peso normal\n\n", imc);
        }else if(imc > 25 && imc < 29.9){
            printf("imc de %.1f é sobrepeso \n\n", imc);
        }else if(imc > 30 && imc < 34.9){
            printf("imc de %.1f é obesidade grau 1\n\n", imc);
        }else if(imc > 35 && imc < 39.9){
            printf("imc de %.1f é obesidade grau 2\n\n", imc);
        }else{
            printf("imc de %.1f é obesidade grau 3\n\n", imc);
        }
    paciente++;
    }
    return 0;
}
//t
#include <stdio.h>

int main(){
    float lado1, lado2, base;
    int saida;

    while( 1 == 1)
    {
        printf("DIGITE O PRIMEIRO LADO DO TRIANGULO: ");
        scanf("%f", &lado1);
        printf("DIGITE O SEGUNDO LADO DO TRIANGULO: ");
        scanf("%f", &lado2);
        printf("DIGITE A BASE DO TRIANGULO: ");
        scanf("%f", &base);
        if (lado1 + lado2 < base){
                printf("A SOMA DOS LADOS NAO PODE SER MENOR QUE A BASE!!");}
        else if (lado1 == lado2 & lado1 != base){
            printf("TRIANGULO ISOCELES \n");
            }
        else if (lado1 == lado2 & lado1 == base & lado2 == base){
                printf("TRIANGULO EQUILATERO \n");
            }
        else{
                printf("TRIANGULO ESCALENO \n");
            }
        
            printf("PARAR: \n SIM = 0 \n NÃO = 1\n");
            scanf("%d", &saida);
            if(saida == 0){
                break;
        }
        
    }
    return 0;
}
//u
#include <stdio.h>
#include <stdlib.h>
   
int main(){
       
        int angulo;
        float result;

        printf("digite o angulo: ");
        scanf("%d", &angulo);

        //validando tamanho do angulo >720 ou <-720
        if(angulo > 720 || angulo < -720){
            printf("angulo não permitido");
        }else if(angulo > 360 || angulo < -360){
            //ver sentido da volta
            if(angulo > 0){
                printf("sentido da volta: \n");
                printf("anti-horario\n");
                result = angulo - 360;
            //POSITIVANDO ANGULOS NEGATIVOS
            }else if(angulo < 0){
                printf("sentido da volta: \n");
                printf("horario\n");
                result = angulo + 360;
                result = result * (-1);
            }

            //quadrante
            if(result > 0 && result < 90){
                printf("quadrante 1\n");
            }else if (result > 90 && result < 180){
                printf("quadrante 2\n");
            }else if (result > 180 && result < 270){
                printf("quadrante 3\n");
            }else if (result > 270 && result < 360){
                printf("quadrante 4\n");
            }
            //se estiver em cima do eixo dos quadrantes
            else if(result == 0 || result == 360){
                printf(" entre os quadrantes 1 e 4\n");
            }else if(result == 90){
                printf(" entre os quadrantes 1 e 2\n");
            }else if(result == 180){
                printf(" entre os quadrantes 2 e 3\n");
            }else if(result == 270){
                printf(" entre os quadrantes 3 e 4\n");
            }


            //VOLTAS
            if(angulo == 360 || angulo == -360){
                printf("o angulo deu duas volta no circulo trigonometrico");
            }else if(result > 0 && result <= 90){
                printf("o angulo deu uma volta e %.2f de volta ", result/360);
            }else if (result > 90 && result <= 180){
                printf("o angulo deu uma volta e %.2f de volta ", result/360);
            }else if (result > 180 && result <= 270){
                printf("o angulo deu uma volta e %.2f de volta ", result/360);
            }else if (result > 270 && result < 360){
                printf("o angulo deu uma volta e %.2f de volta ", result/360);
            }

        }else if(angulo < 360 || angulo > -360){

            printf("sentido da volta \n");
            if(angulo > 0){
                printf("anti-horario\n");
            }else if(angulo < 0){
                printf("horario\n");
            }
            //quadrante
            if(result > 0 && result < 90){
                printf("quadrante 1\n");
            }else if (result > 90 && result < 180){
                printf("quadrante 2\n");
            }else if (result > 180 && result < 270){
                printf("quadrante 3\n");
            }else if (result > 270 && result < 360){
                printf("quadrante 4\n");
            }
            //se estiver em cima do eixo dos quadrantes
            else if(result == 0 || result == 360){
                printf(" entre os quadrantes 1 e 4\n");
            }else if(result == 90){
                printf(" entre os quadrantes 1 e 2\n");
            }else if(result == 180){
                printf(" entre os quadrantes 2 e 3\n");
            }else if(result == 270){
                printf(" entre os quadrantes 3 e 4\n");
            }
            //quantidade de voltas
            if(angulo == 360 || angulo == -360){
                printf("o angulo deu duas voltas");
            }else if(result > 0 && result <= 90){
                printf("o angulo deu uma volta e %.2f de volta ", result/360);
            }else if (result > 90 && result <= 180){
                printf("o angulo deu uma volta e %.2f de volta ", result/360);
            }else if (result > 180 && result <= 270){
                printf("o angulo deu uma volta e %.2f de volta ", result/360);
            }else if (result > 270 && result < 360){
                printf("o angulo deu uma volta e %.2f de volta ", result/360);
            }
            
        }
    return 0;
    }
//v
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, num3, opcao, primeiro, segundo, terceiro, x;
    
    printf("digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("digite o segundo numero: ");
    scanf("%d", &num2);
    printf("digite o terceiro numero: ");
    scanf("%d", &num3);
    
    if(num1 == num2 == num3){
        printf("Os numeros digitados sao iguais\n");
    }else{
        primeiro=num1;
        segundo=num2;
        terceiro=num3;
        
        if(primeiro>segundo){
            x=primeiro;
            primeiro=segundo;
            segundo=x;
        }
        if(primeiro>terceiro){
            x=primeiro;
            primeiro=terceiro;
            terceiro=x;
        }
        if(segundo>terceiro){
            x=segundo;
            segundo=terceiro;
            terceiro=x;
        }
    }    
    
    printf("\n--------------------------------\n");
    printf("1 - números em forma decrescente\n");
    printf("2 - números em forma ascendente \n");
    printf("3 - o maior entre os outros dois\n");
    printf("--------------------------------\n");
    scanf("%d", &opcao);
    
        if(opcao == 3){
            if(num1 == num2 == num3){
            printf("Os numeros digitados sao iguais\n");
            } else if (num1 == num2){
                printf("dois numeros iguais");
            }else if (num2 == num3){
                printf("dois numeros iguais");
            }else if (num1 == num3){
                printf("dois numeros iguais");
            }else if (num1 > num2 && num1 > num3){
                printf("o numero maior é: %d", num1);
            } else if (num2 > num1 && num2 > num3){
                printf("o numero maior é: %d", num2);
            } else if (num3 > num1 && num3 > num2){
                printf("o numero maior é: %d", num3);
            }
        }else if(opcao == 1){
            printf("numeros em ordem decrescente:\n %d \n %d \n %d", terceiro, segundo , primeiro); 
        }else{
            printf("numeros em ordem ascendente:\n %d \n %d \n %d", primeiro, segundo, terceiro);
        }
    return 0;
}
