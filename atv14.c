#include <stdio.h>

int main()
{
    int tamanho = 5;
    int vetorGabarito[tamanho];

    int tamanhoAposta = 10;
    int vetorAposta[tamanhoAposta];

    int pontos = 0;

    for(int i = 0; i < tamanho; i++){
        printf("Digite a %dª resposta do gabarito: ", i + 1);
        scanf("%d", &vetorGabarito[i]);
    }

    for(int i = 0; i < tamanhoAposta; i++){
        printf("Digite o %d° numero da aposta: ", i + 1);
        scanf("%d", &vetorAposta[i]);

        for(int j = 0; j < tamanho; j++){
            if(vetorAposta[i] == vetorGabarito[j]){
                pontos++;
            }
        }
    }

    printf("-------------------\n");
    printf("Voce fez %d pontos!\n", pontos);

    return 0;
}