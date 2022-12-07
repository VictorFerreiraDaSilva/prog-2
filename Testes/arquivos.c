#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *file = fopen("teste.xml", "r"), *file2 = fopen("b.xml", "w");
    int a = 3*(-1);
    char leitor[1000];
    int C, QTD;
    char N[100];
    while(fgets(leitor, 1000, file) != NULL){
        int cod, qt;
        char nome[100];
        sscanf(leitor, "%d;%d;%s", &cod, &qt, &nome);
        if(cod != 13){
            fputs(leitor, file2);            
        }    
        else {
            C = cod;
            QTD = qt;
            strcpy(N, nome);
        }
    }
    fprintf(file2, "%d;%d;%s \n", C, (QTD+a), N);

    fclose(file);
    fclose(file2);

    file = fopen("teste.xml", "w");
    file2 = fopen("b.xml", "r");
    while(fgets(leitor, 1000, file2) != NULL){
        fputs(leitor, file);  
    }

    fclose(file);
    fclose(file2);

    remove("b.xml");

    return 0;
}