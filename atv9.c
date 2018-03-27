#include <stdio.h>

int main(){
    int tamanho = 10;
    int vetorX[tamanho];
    int vetorY[tamanho];
    int valorDecrementavel = 9;

    for(int i = 0; i < tamanho; i++){
        printf("Digite o %d° valor:\n", i + 1);
        scanf("%d", &vetorX[i]);
    }

    for(int i = 0; i < tamanho; i++){
        vetorY[valorDecrementavel] = vetorX[i]; 
        valorDecrementavel--;
    }

    printf("x => ");
    for(int i = 0; i < tamanho; i++){
        if(i == 0){
            printf("%d", vetorX[i]);
        }else{
            printf(" | %d", vetorX[i]);
        }
    }
    printf("\n");

    printf("y => ");
    for(int i = 0; i < tamanho; i++){
        if(i == 0){
            printf("%d", vetorY[i]);
        }else{
            printf(" | %d", vetorY[i]);
        }
    }
    printf("\n");

    return 0;
}