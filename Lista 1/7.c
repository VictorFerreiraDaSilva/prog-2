#include <stdio.h>

int main()
{
    int A[3][3], B[3][3], contador = 0;
    for(int i=0; i<3; i++) 
        for (int j=0; j<3; j++) {
            scanf("%d", &A[i][j]);
        }

    printf("Soma elementos acima da diagonal principal: %d\n", (A[0][1] + A[0][2] + A[1][2]));
    printf("Soma elementos abaixo da diagonal principal: %d\n", (A[1][0] + A[2][0] + A[2][1]));

    return 0;
}
