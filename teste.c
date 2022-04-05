#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 1, i, j;

    for (j = 0; j < 6; j++){
        i = 1;
        while (i <= 5){
            printf("%d\t", num);
            num++;
            i++;
        }
        printf("\n");
        num-=5;
        i = 1;
        while (i <= 5){
            printf("%d\t", num*10);
            num++;
            i++;
        }
        printf("\n");
    }

    return 0;
}