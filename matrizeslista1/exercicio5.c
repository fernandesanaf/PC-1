#include <stdio.h>

// Declare três matrizes M1, M2 e R de ordem 20x4. 
// Veja na figura a seguir um exemplo do que seu programa deve fazer:
// - Armazene um número aleatório em cada elemento de M1 e M2;
// - A matriz resultante R deve receber a soma das matrizes M1 e M2;
// - Imprima as matrizes exatamente conforme figura exemplo.

int main(){
    int m1[20][4], m2[20][4], r[20][4], i, j;

    // - Armazene um número aleatório em cada elemento de M1 e M2;
    for (i = 0; i < 20; i++){
        for (j = 0; j < 4; j++){
            m1[i][j] = rand()%10+1;
            m2[i][j] = rand()%(10+1)+10;
        }
    }
    
    // - A matriz resultante R deve receber a soma das matrizes M1 e M2;
    for (i = 0; i < 20; i++){
        for (j = 0; j < 4; j++){
            r[i][j] = m1[i][j] + m2[i][j];
        }
    }

    // - Imprima as matrizes exatamente conforme figura exemplo.
    printf("\nM1\n");
    for (i = 0; i < 20; i++){
        for (j = 0; j < 4; j++){
            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }
    printf("\nM2\n");
    for (i = 0; i < 20; i++){
        for (j = 0; j < 4; j++){
            printf("%d\t", m2[i][j]);
        }
        printf("\n");
    }
    printf("\nSoma\n");
    for (i = 0; i < 20; i++){
        for (j = 0; j < 4; j++){
            printf("%d + %d\t\t", m1[i][j], m2[i][j]);
        }
        printf("\n");
    }
    printf("\nR\n");
    for (i = 0; i < 20; i++){
        for (j = 0; j < 4; j++){
            printf("%d\t", r[i][j]);
        }
        printf("\n");
    }

    return 0;
}