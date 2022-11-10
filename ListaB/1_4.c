#include <stdio.h>
int main(){
    int a = 0;
    const int b = 1;
    int c = 2;
    short int d = 3;
    float e = 4;
    char f = 'A';
    int vet[7];
    vet[a] = 0;
    vet[b] = 1;
    vet[c] = 2;
    vet[d] = 3;
    // vet[e] = 4;
    vet[f-60] = 5;
    vet[(c==2)+5] = 6;
    vet[7] = 7;
    for (int i = 0; i < 8; i++)
        printf("%d \n", vet[i]);
    return 0;
}