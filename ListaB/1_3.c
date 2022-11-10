#include <stdio.h>
int main(){
    int a;
    const int b = 1;
    int c = 2;
    short int d = 3;
    float e = 4;
    char f = 'A';
    int vet[7];
    vet[0] = a;
    vet[1] = b;
    vet[2] = c;
    vet[3] = d;
    vet[4] = e;
    vet[5] = f;
    vet[6] = c==2;
    vet[7] = 7;
    for (int i = 0; i < 8; i++)
        printf("%d \n", vet[i]);
    return 0;
}