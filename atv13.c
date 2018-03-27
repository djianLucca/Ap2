#include <stdio.h>

int main(){

    int tamanhoGabarito = 20;
    char vetorGabarito[tamanhoGabarito];

    int numeroDeAlunos = 30;

    for(int i = 0; i < tamanhoGabarito; i++){
        printf("Digite a %dª resposta do gabarito: ", i + 1);
        scanf("%c", &vetorGabarito[i]);
        getchar();
    }

    for(int i = 0; i < numeroDeAlunos; i++){

        int acertosDoAluno = 0;
        char vetorRespostas[tamanhoGabarito];

        printf("-----------------------------------\n");
        printf("\t\tAluno %d\n", i + 1);
        printf("-----------------------------------\n");

        for(int j = 0; j < tamanhoGabarito; j++){
            printf("Digite a %dª resposta do aluno %d: ", j + 1, i + 1);
            scanf("%c", &vetorRespostas[j]);
            getchar();
        }

        for(int j = 0; j < tamanhoGabarito; j++){
            if(vetorRespostas[j] == vetorGabarito[j]){
                acertosDoAluno++;
            }
        }

        if(acertosDoAluno > 12){
            printf("\tAPROVADO!!!\n");
        }else{
            printf("\tREPROVADO!!!\n");
        }

    }

    return 0;
}