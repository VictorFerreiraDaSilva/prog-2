#include <stdio.h>

int main(){
    int n[5], aux;

    for(int i=0; i<5; i++){
        scanf("%d", &n[i]);
    }

    printf("Inversa: ");
    for(int i=4; i>=0; i--){
        printf("%d ", n[i]);
    }

    for(int i=0; i<5; i++){
        for(int j=i; j<5; j++){
            if(n[i]<n[j]){
                aux = n[i];
                n[i] = n[j];
                n[j] = aux;
            }
        }
    }
    
    printf("\nDecrescente: ");
    for(int i=0; i<5; i++){
        printf("%d ", n[i]);
    }

    return 0;
}