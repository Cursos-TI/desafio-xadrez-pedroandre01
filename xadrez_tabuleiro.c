#include <stdio.h>

void imprimirTabuleiro(char tabuleiro[8][8]) {
    printf("    A   B   C   D   E   F   G   H\n");
    printf("  +---+---+---+---+---+---+---+---+\n");
    for (int i = 0; i < 8; i++) {
        printf("%d |", 8 - i);
        for (int j = 0; j < 8; j++) {
            printf(" %c |", tabuleiro[i][j]);
        }
        printf(" %d\n", 8 - i);
        printf("  +---+---+---+---+---+---+---+---+\n");
    }
    printf("    A   B   C   D   E   F   G   H\n");
}

void inicializarTabuleiro(char tabuleiro[8][8]) {
    // Peças pretas (letras minúsculas)
    char linhaPreta[8]   = {'t', 'c', 'b', 'q', 'k', 'b', 'c', 't'};
    char linhaBranca[8]  = {'T', 'C', 'B', 'Q', 'K', 'B', 'C', 'T'};

    // Linha 0: peças pretas
    for (int j = 0; j < 8; j++) {
        tabuleiro[0][j] = linhaPreta[j];
        tabuleiro[1][j] = 'p';  // peões pretos
        tabuleiro[6][j] = 'P';  // peões brancos
        tabuleiro[7][j] = linhaBranca[j];
    }

    // Espaços vazios
    for (int i = 2; i <= 5; i++) {
        for (int j = 0; j < 8; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}

int main() {
    char tabuleiro[8][8];
    inicializarTabuleiro(tabuleiro);
    imprimirTabuleiro(tabuleiro);
    return 0;
}
