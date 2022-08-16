#include <stdio.h>
#include <stdlib.h>


int main()
{

    int *pont, i, zeros;
    /*alocando espaço para 1500 inteiros*/
    pont = (int*)calloc(1500 , sizeof(int));

    for(i = 1; i < 1500; i++){
        if(pont[i] == 0){
            zeros++;
        }
    }
    printf("Ao todo temos %d zeros alocados nas 1500 posicoes\n", zeros);

    return 0;
}
