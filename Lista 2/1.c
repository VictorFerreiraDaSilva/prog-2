#include <stdio.h>

int main() {
    int inteiro = 7;
    float real = 13.50;
    char letra = 'v';
    int *i = &inteiro;
    float *r = &real;
    char *l = &letra;

    printf("inteiro: %d, real: %.2f, char: %c\n", inteiro, real, letra);

    *i = 30;
    *r = 93.8;
    *l = 'Z';

    printf("inteiro: %d, real: %.2f, char: %c\n", inteiro, real, letra);

    return 0;
}