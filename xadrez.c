#include <stdio.h>

//Função para movimento da torre
void mov_torre (int n_torre) {
    for(; n_torre > 0; n_torre--){
        printf("Direita\n");
    }
}

//Função para movimento do bispo
void mov_bispo(int n_bispo) {
    for (; n_bispo > 0; n_bispo--)
    {
        int temp = 1;
        while (temp--)
        {
           printf("Cima, ");
        }
        printf("Direita\n");
        
    }
}

//Função para movimento da rainha
void mov_rainha(int n_rainha) {
    do{
        printf("Esquerda\n");
        n_rainha--;
    } while (n_rainha > 0);
    
}

//Função para movimento do cavalo
void mov_cavalo(int n_cavalo){
    for (int ncavalo = 0; ncavalo < 1; ncavalo++)
    {
        int temp = 2;
        while (temp--)
        {
           printf("Baixo, ");
        }
        printf("Esquerda\n");
        
    }
}


int main(){
    int torre = 5, bispo = 5, rainha = 8, cavalo = 1;

    //Torre se move 5 casas para a direita.
    printf("Movimentos da Torre:\n");
    mov_torre(torre);

    //Bispo se move 5 casas para a diagonal cima,direita.
    printf("\nMovimentos do Bispo\n");
    mov_bispo(bispo);

    //Rainha se move 8 casas para a esquerda.
    printf("\nMovimentos da Rainha\n");
    mov_rainha(rainha);
    
    //Move o cavalo para baixo e esquerda.
    printf("\nMovimentos do Cavalo\n");
    mov_cavalo(cavalo);
    

    return 0;
    }