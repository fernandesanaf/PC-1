#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    int num[20], i;
    for(i=0; i<20; i++){
        num[i] = rand()%10 + 1;
        if(num[i] == 7){
            printf("num[%d] = %d\n", i, num[i]);
        }
    }
}
