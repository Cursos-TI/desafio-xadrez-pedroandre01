#include <stdio.h>
#include <ctype.h>

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
