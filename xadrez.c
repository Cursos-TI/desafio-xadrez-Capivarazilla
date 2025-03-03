#include <stdio.h>

int main(){
    int i = 1, j = 1, k = 1;

    printf("Movimentos da Torre:\n");
    for(i; i <= 5; i++){
        printf("Direita\n");
    }

    printf("\nMovimentos do Bispo\n");
    while(j <= 5){
        printf("Cima, Direita\n");
        j++;
    }
    printf("\nMovimentos da Rainha\n");
    do{
        printf("Esquerda\n");
        k++;
    } while (k <= 8);
    

    return 0;
}