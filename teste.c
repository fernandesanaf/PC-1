#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[6], i;
    
    for(i=0;i<6;i++){
        num[i]=0;
    }
    
    for(i=0;i<6;i++){
        // printf("o %dº numero digitado e: %d\n", i+1, num[i]);
            printf("digite o indice que deseja preencher: ");
            scanf("%d",&i);
            printf("digite o numero que deseja colocar no vetor");
            scanf("%d",&num[i]);

    }

    for(i=0;i<6;i++){
        printf("%d , %d \n",i, num[i]);
    }

    return 0;
}
