#include <stdio.h>

float Media(char q, float n1, float n2, float n3, float n4){
    if(q == 'A') return (((n1*5)+(n2*3)+(n3*2)+(n4))/11);
    else if(q == 'B') return ((n1+n2+n3+n4)/4);
}

int main()
{
    float n1, n2, n3, n4;
    char q;
    scanf("%f %f %f %f\n", &n1, &n2, &n3, &n4);
    scanf("%c", &q);
    printf("Média: %.2f\n", Media(q, n1, n2, n3, n4));

    return 0;
}
