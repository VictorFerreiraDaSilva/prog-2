#include <stdio.h>

int main()
{
    int A[10], B[10];
    for(int i=0; i<10; i++) scanf("%d", &A[i]);
    for(int i=0; i<10; i++) B[i] = A[i] * A[i];
    for(int i=0; i<10; i++) printf("%d ", A[i]);
    printf("\n");
    for(int i=0; i<10; i++) printf("%d ", B[i]);

    return 0;
}
