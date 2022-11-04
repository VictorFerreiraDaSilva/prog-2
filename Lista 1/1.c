#include <stdio.h>

int main()
{
    int valores[6];
    
    for(int i=0; i<6; i++) scanf("%d", &valores[i]);
    for(int i=0; i<6; i++) printf("%d ", valores[i]);

    return 0;
}
