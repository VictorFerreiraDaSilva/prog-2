#include <stdio.h>

int main()
{
    int A[4][4], B[4][4], contador = 0;
    for(int i=0; i<4; i++) 
        for (int j=0; j<4; j++) {
            A[i][j] = (i+1)*(j+1);
        }
        
    for(int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
