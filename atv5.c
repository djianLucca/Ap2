#include <stdio.h>

int main(){

    int tamanho = 10;
    int vetor[tamanho];
    int digitouZero = 0;
    int contador = 0;
    int soma = 0;

    while(!digitouZero && contador < tamanho){
        printf("Digite o %d° valor:\n", contador + 1);
        scanf("%d", &vetor[contador]);

        if(vetor[contador] <= 0){
            digitouZero = 1;
        }

        contador++;
    }

    for(int i = 0; i < contador; i++){
        if(vetor[i] > 10){
            soma += vetor[i];
        }
    }

    printf("-------------------------------------\n");
    printf("A soma dos valores maior que 10 é: %d\n", soma);

    return 0;
}