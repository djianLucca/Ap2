#include <stdio.h>

int main(){
    
    int tamanho = 10;
    int vetor1[tamanho];
    int vetor2[tamanho];
    int vetorResultado[tamanho];

    for(int i = 0; i < tamanho; i++){
        printf("Digite o %d° valor do vetor 1:\n", i + 1);
        scanf("%d", &vetor1[i]);
    }
    
    printf("------------------------------\n");

    for(int i = 0; i < tamanho; i++){
        printf("Digite o %d° valor do vetor 2:\n", i + 1);
        scanf("%d", &vetor2[i]);
    }
    
    for(int i = 0; i < tamanho; i++){
        vetorResultado[i] = vetor1[i] * vetor2[i];
    }

    printf("---------------\n");
    printf("Vetor reultado:\n");
    for(int i = 0; i < tamanho; i++){
        if(i == 0){
            printf("%d", vetorResultado[i]);
        }else{
            printf(" | %d", vetorResultado[i]);
        }
    }
    printf("\n");

    return 0;
}