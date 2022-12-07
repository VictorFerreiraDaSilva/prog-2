#include <stdio.h>
#include <errno.h>
#include <string.h>

int CadastrarProduto();
int ConsultarEstoqueProduto();
int RetirarProduto();
int AdicionarProduto();
int AlterarEstoque(int codigo, int quantidade);

FILE *file;
char frase[100];

int main()
{
    file = fopen("estoque.txt", "rb+");
    if(file == NULL) 
    {
        file = fopen("estoque.txt", "wb");
    }
    fclose(file);
    int escolha = 7;
    while(escolha != 0){
        int sair = 0;
        printf("--------------------------------------------\n");
        printf("Digite o numero referente a opcao desejada:\n 1: Cadastrar Produto\n 2: Consultar Estoque de um Produto\n 3: Adicionar Produto ao Estoque\n 4: Retirar Produto do Estoque\n 0: Sair do Programa\n");
        scanf("%d", &escolha);
        switch(escolha) {
          case 0:
            sair = 1;
            return 0;
            break;
          case 1:
            if(CadastrarProduto() == 1) continue;;
            break;
          case 2:
            if (ConsultarEstoqueProduto() == 1) continue;;
            break;
          case 3:
            if(AdicionarProduto() == 1) continue;;
            break;
          case 4:
            if(RetirarProduto() == 1) continue;;
            break;
        }
        if(sair == 1) break;
    }
    return 0;
    
}

int CadastrarProduto(){
    int codigo, quantidade;
    char nome[100];
    printf("Insira o Nome do produto: ");
    scanf("%s", &nome);
    printf("Insira o Codigo do produto: ");
    scanf("%d", &codigo);
    printf("Insira a Quantidade existente do produto: ");
    scanf("%d", &quantidade);

    file = fopen("estoque.txt", "a+");
    fprintf(file, "%d;%d;%s\n", codigo, quantidade, nome);
    if(fclose(file) == 0) return 1;
    else return 0;
}

int ConsultarEstoqueProduto(){
    int codigo, achou = 0;
    printf("Insira o Codigo do produto: ");
    scanf("%d", &codigo);
    int quantidade = 0;
    file = fopen("estoque.txt", "a+");
    while(fgets(frase, 100, file) != NULL){
        int cod, qt;
        char nome[100];
        sscanf(frase, "%d;%d;%s", &cod, &qt, &nome);
        if(cod == codigo){
            printf("Nome: %s, Codigo: %d, Quantidade: %d \n", nome, cod, qt);
            achou = 1;
            break;
        }                
    }
    if(achou != 1) printf("Produto nao encontrado\n");
    if(fclose(file) == 0) return 1;
    else return 0;
}

int RetirarProduto(){
    int cd, quant;
    printf("Insira o Codigo do produto: ");
    scanf("%d", &cd);
    printf("Insira a quantidade a ser retirada ao estoque: ");
    scanf("%d", &quant);
    return AlterarEstoque(cd, (quant*(-1)));
}

int AdicionarProduto(){
    int cd, quant;
    printf("Insira o Codigo do produto: ");
    scanf("%d", &cd);
    printf("Insira a quantidade a ser adicionada ao estoque: ");
    scanf("%d", &quant);
    return AlterarEstoque(cd, quant);
}

int AlterarEstoque(int codigo, int quantidade){
    file = fopen("estoque.txt", "r");
    FILE *file2 = fopen("b.xml", "w");
    int a = quantidade;
    char leitor[1000];
    int C, QTD;
    char N[100];
    while(fgets(leitor, 1000, file) != NULL){
        int cod, qt;
        char nome[100];
        sscanf(leitor, "%d;%d;%s", &cod, &qt, &nome);
        if(cod != codigo){
            fputs(leitor, file2);            
        }    
        else {
            C = cod;
            QTD = qt;
            strcpy(N, nome);
        }
    }
    int novaQt = (QTD+a);
    if (novaQt < 0) novaQt = 0;
    fprintf(file2, "%d;%d;%s \n", C, novaQt, N);

    fclose(file);
    fclose(file2);

    file = fopen("estoque.txt", "w");
    file2 = fopen("b.xml", "r");
    while(fgets(leitor, 1000, file2) != NULL){
        fputs(leitor, file);  
    }

    fclose(file);
    fclose(file2);

    remove("b.xml");

    if(remove("b.xml") == 0) return 1;
    else return 0;
}