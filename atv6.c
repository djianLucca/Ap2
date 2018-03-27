#include <stdio.h>

int main(){
    int tamanho = 10;
    int vetor[tamanho];
    int valorBuscado;
    int numeroDeOcorrencias = 0;

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
        printf("-----------------------------------\n");
        printf("Este valor se encontra nos indices:\n");

        for(int i = 0; i < tamanho; i++){
            if(valorBuscado == vetor[i]){
                if(numeroDeOcorrencias == 0){
                    printf("%d", i);
                }else{
                    printf(", %d", i);
                }
                numeroDeOcorrencias++;
            }
        }
        printf("\n");
    }else{
        printf("------------------------------------\n");
        printf("Este valor não se encontra no vetor!\n");
    }

    return 0;
}