#include <stdio.h>

#define PASSOS_BISPO 5
#define PASSOS_TORRE 5
#define PASSOS_RAINHA 8

int main() {
    printf("=== Desafio MateCheck - Nível Novato ===\n\n");

    // ➤ BISPO: 5 casas na diagonal superior direita (usa FOR)
    printf("Movimentação do Bispo (FOR - diagonal superior direita):\n");
    for (int i = 1; i <= PASSOS_BISPO; i++) {
        printf("Diagonal (%d, %d)\n", i, i); // x = y
    }

    printf("\n");

    // ➤ TORRE: 5 casas para a direita (usa WHILE)
    printf("Movimentação da Torre (WHILE - direita):\n");
    int j = 1;
    while (j <= PASSOS_TORRE) {
        printf("Direita (%d)\n", j);
        j++;
    }

    printf("\n");

    // ➤ RAINHA: 8 casas para a esquerda (usa DO-WHILE)
    printf("Movimentação da Rainha (DO-WHILE - esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda (%d)\n", k);
        k++;
    } while (k <= PASSOS_RAINHA);

    return 0;
}

