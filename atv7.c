#include <stdio.h>

int main(){
    int tamanho = 10;
    int vetor[tamanho];
    int valorBuscado;

    int tamanhoVetorAuxiliar = 0;

    for(int i = 0; i < tamanho; i++){
        printf("Digite o %d° valor:\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("----------------------------------------\n");
    printf("Digite o valor a ser definido como base:\n");
    scanf("%d", &valorBuscado);
    
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] > valorBuscado){
            tamanhoVetorAuxiliar++;
        }
    }

    if(tamanhoVetorAuxiliar > 0){
        int vetorAuxiliar[tamanhoVetorAuxiliar];
        int contador = 0;
        
        for(int i = 0; i < tamanho; i++){
            if(vetor[i] > valorBuscado){
                vetorAuxiliar[contador] = vetor[i];
                contador++;
            }
        }

        printf("---------------\n");
        printf("Vetor auxiliar:\n");
        for(int i = 0; i < contador; i++){
            if(i == 0){
                printf("%d", vetorAuxiliar[i]);
            }else{
                printf(" | %d", vetorAuxiliar[i]);
            }
        }
        printf("\n");
    }else{
        printf("---------------------------------------------------------\n");
        printf("Nenhum numero do vetor principal eh maior que o digitado!\n");
    }
    
    return 0;
}