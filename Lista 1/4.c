#include <stdio.h>

int main()
{
    int A[10], aux;
    for(int i=0; i<10; i++) scanf("%d", &A[i]);
    
    for(int i=0; i<10; i++){
        for (int j=i; j<10; j++) {
            if(A[i]>A[j]){
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
        
    }

    printf("Maior: %d\n", A[9]);
    printf("Menor: %d\n", A[0]);

    return 0;
}
