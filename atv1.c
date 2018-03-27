#include <stdio.h>

int main()
{
    int tamanho = 10;
    int vetor[tamanho];
    int valorBuscado;

    int estaNoVetor = 0;

    for(int i = 0; i < tamanho; i++){
        printf("Digite o %d° valor:\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("-------------------------------\n");
    printf("Digite o valor a ser procurado:\n");
    scanf("%d", &valorBuscado);
    
    for(int i = 0; i < tamanho; i++){
        if(valorBuscado == vetor[i]){
            estaNoVetor = 1;
        }
    }

    if(estaNoVetor){
        printf("ACHEI xD\n");
    }else{
        printf("NÃO ACHEI :(\n");
    }

    getchar();
    return 0;
}