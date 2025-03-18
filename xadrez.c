#include <stdio.h>

// Função recursiva para mover a Torre
void mover_torre(int casas) {
    if (casas <= 0) return; // Caso base: não há mais casas para mover
    printf("Direita\n");
    mover_torre(casas - 1); // Chamada recursiva para mover uma casa a mais
}

// Função recursiva para mover o Bispo
void mover_bispo(int casas) {
    if (casas <= 0) return; // Caso base: não há mais casas para mover
    printf("Cima, Direita\n");
    mover_bispo(casas - 1); // Chamada recursiva para mover uma casa a mais
}

// Função recursiva para mover a Rainha
void mover_rainha(int casas) {
    if (casas <= 0) return; // Caso base: não há mais casas para mover
    printf("Esquerda\n");
    mover_rainha(casas - 1); // Chamada recursiva para mover uma casa a mais
}

// Função para mover o Cavalo (usando loops complexos)
void mover_cavalo() {
    for (int i = 0; i < 1; i++) {  // O Cavalo faz o movimento "L" uma vez
        for (int j = 0; j < 2; j++) {  // Loop interno para mover duas casas para cima
            printf("Cima\n");
        }
        printf("Direita\n");  // O Cavalo então se move uma casa para a direita
    }
}

int main() {
    // Movimento da Torre - 5 casas para a direita
    printf("Movimento da Torre:\n");
    mover_torre(5);
    
    printf("\n");

    // Movimento do Bispo - 5 casas na diagonal para cima e à direita
    printf("Movimento do Bispo:\n");
    mover_bispo(5);
    
    printf("\n");

    // Movimento da Rainha - 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    mover_rainha(8);
    
    printf("\n");

    // Movimento do Cavalo - duas casas para cima e uma para a direita
    printf("Movimento do Cavalo:\n");
    mover_cavalo();

    return 0;
}
