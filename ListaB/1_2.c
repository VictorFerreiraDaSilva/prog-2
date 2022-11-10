#include <stdio.h>
int main(){
    int a;
    const int b = 1;
    int c = 2;
    short int d = 3;
    float e = 4;
    char f = 'A';
    int vet[] = {a, b, c, d, e, f, c==2, 7};
    for (int i = 0; i < 8; i++)
    printf("%d \n", vet[i]);
    return 0;
}