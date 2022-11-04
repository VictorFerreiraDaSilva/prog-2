#include <stdio.h>

int main()
{
    int A[4][4], contador = 0;
    for(int i=0; i<4; i++) 
        for (int j=0; j<4; j++) {
            scanf("%d", &A[i][j]);
            if(A[i][j] > 10) contador++;
        }

    printf("Quantidade de maiores que 10: %d\n", contador);

    return 0;
}
