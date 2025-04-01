#include <stdio.h>

int main() {
    // ===== MOVIMENTO DA TORRE =====
    printf("=== Torre ===\n");

    // Movimento para cima (4 casas)
    for(int i = 0; i < 4; i++) {
        printf("Cima\n");
    }

    // Movimento para baixo (3 casas)
    int contador_baixo = 0;
    while(contador_baixo < 3) {
        printf("Baixo\n");
        contador_baixo++;
    }

    // Movimento para esquerda (2 casas)
    int esquerda = 2;
    do {
        printf("Esquerda\n");
        esquerda--;
    } while(esquerda > 0);

    // Movimento para direita (5 casas)
    int direita = 5;
    while(direita > 0) {
        printf("Direita\n");
        direita--;
    }

    // ===== MOVIMENTO DO BISPO =====
    printf("\n=== Bispo ===\n");

    // Diagonal superior-esquerda (3 casas)
    for(int i = 0; i < 3; i++) {
        printf("Cima Esquerda\n");
    }

    // Diagonal inferior-direita (4 casas)
    int diag = 4;
    do {
        printf("Baixo Direita\n");
        diag--;
    } while(diag > 0);

    // ===== MOVIMENTO DA RAINHA =====
    printf("\n=== Rainha ===\n");

    // Combina movimentos de Torre e Bispo
    // Movimento horizontal (esquerda 2x)
    for(int i = 0; i < 2; i++) {
        printf("Esquerda\n");
    }

    // Movimento diagonal (cima-direita 3x)
    int mov = 3;
    while(mov > 0) {
        printf("Cima Direita\n");
        mov--;
    }

    // ===== MOVIMENTO DO CAVALO =====
    printf("\n=== Cavalo ===\n");

    // Loop externo (for) para controlar o numero de movimentos em L
    for(int i = 0; i < 1; i++) {
        // Primeiro movimento: 2 casas para baixo (loop while)
        int vertical = 0;
        while(vertical < 2) {
            printf("Baixo\n");
            vertical++;
        }

        // Segundo movimento: 1 casa para esquerda (loop do-while)
        int horizontal = 0;
        do {
            printf("Esquerda\n");
            horizontal++;
        } while(horizontal < 1);
    }

    return 0;
}
