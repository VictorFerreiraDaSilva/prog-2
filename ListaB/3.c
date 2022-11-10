#include <stdio.h>

int main(){
    float aluno[5][4] = {0};
    float aux;

    for(int i=0; i<5; i++){
        printf("Digite o RA do %dº Aluno: ", i+1);
        scanf("%f", &aluno[i][0]);
        printf("Digite a Noda da Prova do %dº Aluno: ", i+1);
        scanf("%f", &aluno[i][1]);
        printf("Digite a Nota do Trabalho do %dº Aluno: ", i+1);
        scanf("%f", &aluno[i][2]);
        aluno[i][3] = (aluno[i][1] + aluno[i][2])/2;
    }

    for(int i=0; i<5; i++){
        for(int j=i; j<5; j++){
            if(aluno[i][3]<aluno[j][3]){
                aux = aluno[i][3];
                aluno[i][3] = aluno[j][3];
                aluno[j][3] = aux;
                
                aux = aluno[i][2];
                aluno[i][2] = aluno[j][2];
                aluno[j][2] = aux;
                
                aux = aluno[i][1];
                aluno[i][1] = aluno[j][1];
                aluno[j][1] = aux;
                
                aux = aluno[i][0];
                aluno[i][0] = aluno[j][0];
                aluno[j][0] = aux;
                
            }
        }
    }

    printf("Aluno com melhor média final:\nRA: %.0f\nNota Prova: %.2f\nNota Trabalho: %.2f\nMédia Final: %.2f", aluno[0][0], aluno[0][1], aluno[0][2], aluno[0][3]);
    return 0;
}