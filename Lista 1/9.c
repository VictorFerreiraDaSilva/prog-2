#include <stdio.h>
#include <stdlib.h>  

int main()
{
    int cartela[5][5], contador = 0, tem = 0;
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
            cartela[i][j] = -1;
     
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++){
            cartela[i][j] = rand() % 99;
            for(int k=0; k<5; k++)
                for(int l=0; l<5; l++){
                    if(k==i && l==j) continue;
                    if(cartela[i][j] == cartela[k][l])
                        tem = 1;
                }
            if(tem == 1){
                j--;
                tem = 0;
            }
        }
        
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++)
            printf("%d ", cartela[i][j]);
        printf("\n");
    }
    return 0;
}
