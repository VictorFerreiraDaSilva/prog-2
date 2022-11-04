#include <stdio.h>

int main(){
    int a, b;
    
    printf("Digite o Primeiro Valor: ");
    scanf("%d", &a);
    printf("Digite o Segundo Valor: ");
    scanf("%d", &b);

    printf("Valor com maior endereço: ");
    if(&a>&b) printf("%d", a);
    else printf("%d", b);

    return 0;
}