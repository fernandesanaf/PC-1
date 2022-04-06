#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num[20], i, cont;

    for(i=99; i>89; i--){
        num[cont] = i;
        cont++;
    }
    for(i=0; i<10; i++){
        printf("o %dº numero e: %d\n", i, num[i]);
    }
}
