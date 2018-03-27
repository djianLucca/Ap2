#include <stdio.h>

int main()
{
    int tamanho = 13;
    int vetorGabarito[tamanho];

    int numeroDeApostadores = 15;

    for(int i = 0; i < tamanho; i++){
        printf("Digite a %dª resposta do gabarito: ", i + 1);
        scanf("%d", &vetorGabarito[i]);
    }

    printf("------------------------\n");
    
    for(int i = 0; i < numeroDeApostadores; i++){
        int vetorAposta[tamanho];
        int acertos = 0;

        for(int j = 0; j < tamanho; j++){
            printf("Digite a %dª resposta do jogador numero %d : ", j + 1, i + 1);
            scanf("%d", &vetorAposta[j]);

            for(int k = 0; k < tamanho; k++){
                if(vetorAposta[j] == vetorGabarito[k]){
                    acertos++;
                }
            }
        }

        printf("------------------------\n");

        if(acertos >= tamanho){
            printf("Ganhador!!!\n");
        }else{
            printf("Não foi dessa vez...\n");
        }

        printf("------------------------\n");
    }


    return 0;
}