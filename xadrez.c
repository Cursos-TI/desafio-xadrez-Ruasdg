#include <stdio.h>

int main() {
    // Movimento da Torre - 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo - 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimento da Rainha - 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    // Movimento do Cavalo - duas casas para baixo e uma para a esquerda
    printf("\nMovimento do Cavalo:\n");
    // Usamos loops aninhados: o loop 'for' para o número de movimentos e o loop 'while' para as direções específicas.
    for (int i = 0; i < 1; i++) {  // Loop externo que faz o Cavalo realizar o movimento "L"
        int l = 0;
        while (l < 2) {  // Loop interno para o movimento de duas casas para baixo
            printf("Baixo\n");
            l++;
        }
        printf("Esquerda\n");  // Movimento de uma casa para a esquerda
    }

    return 0;
}


