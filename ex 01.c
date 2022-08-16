#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam, i;
    int *p;

    printf("Informe quantas posicoes tera o vetor: ");
    scanf("%d",&tam);

    p = (int *) malloc(tam * sizeof(int));

    if(p == NULL){

        printf("\nERRO");
        system("pause");
        exit(1);
}
    for(i=0; i < tam; i++){
        printf("Digite um valor para a posicao [%d] : ", i);
        scanf("%d", &p[i]);
     }
    printf("\n");
    
    for(i=0; i < tam; i++){
        printf("O conteudo da posicao [%d] = %d\n", i, *(p+i));
 }
    free(p); //desalocando a memoria


    return 0;
}
