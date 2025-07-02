#include <stdio.h>

// Função para imprimir o tabuleiro
void imprimirTabuleiro(char tabuleiro[8][8]) {
    printf("\n    A   B   C   D   E   F   G   H\n");
    printf("  +---+---+---+---+---+---+---+---+\n");
    for (int i = 0; i < 8; i++) {
        printf("%d |", 8 - i);
        for (int j = 0; j < 8; j++) {
            printf(" %c |", tabuleiro[i][j]);
        }
        printf(" %d\n", 8 - i);
        printf("  +---+---+---+---+---+---+---+---+\n");
    }
    printf("    A   B   C   D   E   F   G   H\n\n");
}

// Inicializa o tabuleiro com as peças iniciais
void inicializarTabuleiro(char tabuleiro[8][8]) {
    char linhaPreta[8]   = {'t', 'c', 'b', 'q', 'k', 'b', 'c', 't'};
    char linhaBranca[8]  = {'T', 'C', 'B', 'Q', 'K', 'B', 'C', 'T'};

    for (int j = 0; j < 8; j++) {
        tabuleiro[0][j] = linhaPreta[j];
        tabuleiro[1][j] = 'p';
        tabuleiro[6][j] = 'P';
        tabuleiro[7][j] = linhaBranca[j];
    }

    for (int i = 2; i <= 5; i++) {
        for (int j = 0; j < 8; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}

// Converte letra de coluna (A-H) para índice (0-7)
int colunaParaIndice(char c) {
    if (c >= 'A' && c <= 'H') return c - 'A';
    if (c >= 'a' && c <= 'h') return c - 'a';
    return -1;
}

int main() {
