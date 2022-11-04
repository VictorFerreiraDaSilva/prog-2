#include <stdio.h>

float ComparaSalarios(){
    float s1,s2;
    scanf("%f", &s1);
    scanf("%f", &s2);
    if(s1>s2) return s1;
    else return s2;
}

int main()
{
    printf("Maior salario: %.2f\n", ComparaSalarios());

    return 0;
}
