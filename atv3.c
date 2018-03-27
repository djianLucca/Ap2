#include <stdio.h>

int main(){

    int tamanho = 30;
    int vetor[tamanho];
    int numerosPositivos = 0;

    for(int i = 0; i < tamanho; i++){
        printf("Digite o %d° valor:\n", i + 1);
        scanf("%d", &vetor[i]);

        if(vetor[i] > 0){
            numerosPositivos++;
        }
    }

    printf("------------------------------\n");
    printf("Voce digitou %d numeros positivos:\n", numerosPositivos);

    for(int i = 0; i < tamanho; i++){
        if(vetor[i] > 0){
            if(i == 0){
                printf("%d", vetor[i]);
            }else{
                printf(", %d", vetor[i]);
            }
        }
    }

    printf("\n");

    return 0;
}