#include <stdio.h>

int main()
{
    int tamanho = 5;
    int vetorPar[tamanho];
    int vetorImpar[tamanho];
    int valorDigitado;
    int contadorPar = 0;
    int contadorImpar = 0;

    for(int i = 0; i < 30; i++){
        printf("Digite algum valor: ");
        scanf("%d", &valorDigitado);

        if(valorDigitado % 2 == 0){
            vetorPar[contadorPar] = valorDigitado;
            contadorPar++;
            if(contadorPar >= tamanho){
                printf("-------------------------------\n");
                printf("Par => ");
                for(int i = 0; i < tamanho; i++){
                    if(i == 0){
                        printf("%d", vetorPar[i]);
                    }else{
                        printf(" | %d", vetorPar[i]);
                    }
                }
                printf("\n");
                contadorPar = 0;
            }
        }else{
            vetorImpar[contadorImpar] = valorDigitado;
            contadorImpar++;
            if(contadorImpar >= tamanho){
                printf("-------------------------------\n");
                printf("Impar => ");
                for(int i = 0; i < tamanho; i++){
                    if(i == 0){
                        printf("%d", vetorImpar[i]);
                    }else{
                        printf(" | %d", vetorImpar[i]);
                    }
                }
                printf("\n");
                contadorImpar = 0;
            }
        }
    }

    printf("----------------------------------------\n");

    printf("Par => ");
    for(int i = 0; i < tamanho; i++){
        if(i == 0){
            printf("%d", vetorPar[i]);
        }else{
            printf(" | %d", vetorPar[i]);
        }
    }
    printf("\n");

    printf("Impar => ");
    for(int i = 0; i < tamanho; i++){
        if(i == 0){
            printf("%d", vetorImpar[i]);
        }else{
            printf(" | %d", vetorImpar[i]);
        }
    }
    printf("\n");

    return 0;
}