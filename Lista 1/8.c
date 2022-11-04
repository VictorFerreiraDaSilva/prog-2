#include <stdio.h>

int MODULO(int n);

int main()
{
    int numero;
    scanf("%d", &numero);
    printf("Modulo: %d\n", MODULO(numero));

    return 0;
}

int MODULO(int n){
    int k = 0;
    if(n<0) n*= -1;
    return n;
}
