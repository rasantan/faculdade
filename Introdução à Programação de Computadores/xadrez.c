#include <stdio.h>

// Função recursiva para movimento da Torre
void mover_torre(int direcao, int casas) {
    if (casas <= 0) return;

    switch(direcao) {
        case 0: printf("Cima\n"); break;
        case 1: printf("Baixo\n"); break;
        case 2: printf("Esquerda\n"); break;
        case 3: printf("Direita\n"); break;
    }
    mover_torre(direcao, casas-1);
}

// Função recursiva para movimento do Bispo
void mover_bispo(int direcao, int casas) {
    if (casas <= 0) return;

    switch(direcao) {
        case 0: printf("Cima Esquerda\n"); break;
        case 1: printf("Cima Direita\n"); break;
        case 2: printf("Baixo Esquerda\n"); break;
        case 3: printf("Baixo Direita\n"); break;
    }
    mover_bispo(direcao, casas-1);
}

// Função recursiva para movimento da Rainha (combina Torre e Bispo)
void mover_rainha(int direcao, int casas) {
    if (casas <= 0) return;

    switch(direcao) {
        case 0: printf("Cima\n"); break;
        case 1: printf("Baixo\n"); break;
        case 2: printf("Esquerda\n"); break;
        case 3: printf("Direita\n"); break;
        case 4: printf("Cima Esquerda\n"); break;
        case 5: printf("Cima Direita\n"); break;
        case 6: printf("Baixo Esquerda\n"); break;
        case 7: printf("Baixo Direita\n"); break;
    }
    mover_rainha(direcao, casas-1);
}

int main() {
    // ===== MOVIMENTO DA TORRE (RECURSIVO) =====
    printf("=== Torre ===\n");
    mover_torre(0, 4); // Cima
    mover_torre(1, 3); // Baixo
    mover_torre(2, 2); // Esquerda
    mover_torre(3, 5); // Direita

    // ===== MOVIMENTO DO BISPO (RECURSIVO) =====
    printf("\n=== Bispo ===\n");
    mover_bispo(0, 3); // Cima Esquerda
    mover_bispo(3, 4); // Baixo Direita

    // ===== MOVIMENTO DA RAINHA (RECURSIVO) =====
    printf("\n=== Rainha ===\n");
    mover_rainha(2, 2); // Esquerda
    mover_rainha(5, 3); // Cima Direita

    // ===== MOVIMENTO DO CAVALO (LOOPS COMPLEXOS) =====
    printf("\n=== Cavalo ===\n");
    int movimentos[8][2] = {{2,1}, {2,-1}, {-2,1}, {-2,-1}, {1,2}, {1,-2}, {-1,2}, {-1,-2}};

    for(int i = 0; i < 8; i++) {
        int vertical = movimentos[i][0];
        int horizontal = movimentos[i][1];

        // Movimento vertical
        if(vertical > 0) {
            for(int v = 0; v < vertical; v++) {
                printf("Cima\n");
            }
        } else {
            for(int v = 0; v < -vertical; v++) {
                printf("Baixo\n");
            }
        }

        // Movimento horizontal
        if(horizontal > 0) {
            for(int h = 0; h < horizontal; h++) {
                printf("Direita\n");
            }
        } else {
            for(int h = 0; h < -horizontal; h++) {
                printf("Esquerda\n");
            }
        }
    }

    return 0;
}
