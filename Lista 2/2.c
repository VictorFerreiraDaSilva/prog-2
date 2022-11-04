#include <stdio.h>

int main(){
    int a = 0, b = 0;
    
    if(&a>&b) printf("%p", &a);
    else printf("%p", &b);

    return 0;
}