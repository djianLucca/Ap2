#include <stdio.h>

int main(){

    int tamanho = 10;
    int vetorPar[tamanho];
    int vetorImpar[tamanho];
    int contadorPar = 0;
    int contadorImpar = 0;
 
    int valorDigitado;
    
    //Bool
    int digitouZero = 0;

    while(!digitouZero && contadorPar < tamanho && contadorImpar < tamanho){
        printf("Digite algum valor: ");
        scanf("%d", &valorDigitado);

        if(valorDigitado == 0){
            digitouZero = 1;
        }else{
            if(valorDigitado % 2 == 0){
                vetorPar[contadorPar] = valorDigitado;
                contadorPar++;
            }else{
                vetorImpar[contadorImpar] = valorDigitado;
                contadorImpar++;
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