#include <stdio.h>

int main(){

    int tamanho = 20;
    int vetor[tamanho];
    int numerosPares = 0;

    for(int i = 0; i < tamanho; i++){
        printf("Digite o %d° valor:\n", i + 1);
        scanf("%d", &vetor[i]);

        if(vetor[i] % 2 == 0){
            numerosPares++;
        }
    }

    printf("------------------------------\n");
    printf("Voce digitou %d numeros pares!\n", numerosPares);

    getchar();
    return 0;
}