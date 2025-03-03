#include <stdio.h>

int main(){
    int torre = 1, bispo = 1, rainha = 1, mov_cav = 1;

    //Torre se move 5 casas para a direita
    printf("Movimentos da Torre:\n");
    for(torre; torre <= 5; torre++){
        printf("Direita\n");
    }

    //Bispo se move 5 casas para a diagonal cima,direita
    printf("\nMovimentos do Bispo\n");
    while(bispo <= 5){
        printf("Cima, Direita\n");
        bispo++;
    }

    //Rainha se move 8 casas para a esquerda
    printf("\nMovimentos da Rainha\n");
    do{
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);
    
    //Move o cavalo para baixo e esquerda
    printf("\nMovimentos do Cavalo\n");
    for (int cavalo1 = 0; cavalo1 < 1; cavalo1++)
    {
        int temp = 2;
        while (temp--)
        {
           printf("Baixo, ");
        }
        printf("Esquerda\n");
        
    }
    

    return 0;
}