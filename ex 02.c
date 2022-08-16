#include <stdio.h>
#include <stdlib.h>


int main()
{

    int i, tam;
    char *pont;

    printf("Entre com o tamanho da string: ");
    scanf("%d", &tam);


    pont = (char*)malloc(tam * sizeof(char));

    printf("Digite a string: ");
    scanf(" %[^\n]", pont);

    for(i = 0; i < tam+2; i++){
        printf("%c", *(pont + i));
    }


    return 0;
}
