/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    RA:
ana.fernandes8@estudante.ifms.edu.br
DATA: 18/03/2022
*/
// #include <stdio.h>

// int main()
// {
//     int num = 1;
//     while(num<=10){
//         printf("%d", num);
//         num++;
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num = 100;
//     while(num>=80){
//         printf(" %d", num);
//         num--;
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i, num = 30;
//     while(num<=180){
//         printf(" %d", num);
//         num = num + 10;
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num = 1;
//     while(num<=10){
//         printf(" %d a, %d b, %d c", num, num, num);
//         num++;
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int numero, contador = 0;
//     numero = 1;
//     while (numero <= 311)
//     {

//         if (numero % 2 == 0)
//         {
//             contador++;
//         }
//         else
//         {
//             printf("\n %d \n", numero);
//         }
//         numero++;
//     }
// }

// esse ainda não esta pronto
#include <stdio.h>

int main()
{
    int numero, contador = 0;
    numero = 1;
    while (numero <= 403)
    {
        printf(" %d ", numero);
        if (numero % 4 == 0)
            printf("x");

        contador++;

        numero++;
    }
}
