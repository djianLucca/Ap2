#include <stdio.h>

int main(){

    int tamanho = 30;
    int vetor[tamanho];
    int menorNumero;

    for(int i = 0; i < tamanho; i++){
        printf("Digite o %d° valor:\n", i + 1);
        scanf("%d", &vetor[i]);

        if(i == 0){
            menorNumero = vetor[i];
        }else{
            if(vetor[i] < menorNumero){
                menorNumero = vetor[i];
            }
        }
    }

    printf("------------------------------\n");
    printf("O menor numero digitado foi: %d\n", menorNumero);

    getchar();
    return 0;
}