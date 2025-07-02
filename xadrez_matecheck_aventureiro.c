#include <stdio.h>

#define TAM 8

int main() {
    printf("=== Desafio MateCheck - Nível Aventureiro ===\n\n");

    // Posição inicial do cavalo
    int x = 4; // linha
    int y = 4; // coluna

    printf("Posição inicial do cavalo: (%d, %d)\n", x, y);
    printf("Movimentos possíveis do cavalo:\n");

    // Movimentos possíveis em L (2x1 e 1x2)
    int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

    // ➤ Usando loops aninhados para simular as 8 direções possíveis
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // Verifica se está dentro do tabuleiro
        if (nx >= 0 && nx < TAM && ny >= 0 && ny < TAM) {
            printf("-> (%d, %d)\n", nx, ny);
        }
    }

    return 0;
}

}
