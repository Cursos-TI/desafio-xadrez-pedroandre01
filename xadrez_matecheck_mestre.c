#include <stdio.h>

#define TAB 8

// 🟣 Bispo: Diagonal superior direita (5 passos) - recursivo
void moverBispo(int x, int y, int passos) {
    if (passos == 0 || x < 0 || x >= TAB || y < 0 || y >= TAB) return;
    printf("Bispo -> (%d, %d)\n", x, y);
    moverBispo(x - 1, y + 1, passos - 1); // sobe linha, vai pra direita
}

// 🔵 Torre: Direita (5 passos) - recursivo
void moverTorre(int x, int y, int passos) {
    if (passos == 0 || y >= TAB) return;
    printf("Torre -> (%d, %d)\n", x, y);
    moverTorre(x, y + 1, passos - 1); // mesma linha, avança coluna
}

// 🟢 Rainha: Esquerda (8 passos) - recursivo
void moverRainha(int x, int y, int passos) {
    if (passos == 0 || y < 0) return;
    printf("Rainha -> (%d, %d)\n", x, y);
    moverRainha(x, y - 1, passos - 1); // mesma linha, para esquerda
}

// ♞ Cavalo: cima e direita (1 vez), com múltiplas condições
void moverCavaloComCondicoes(int x, int y) {
    int dx[] = {-2, -1, 1, 2};
    int dy[] = {1, 2};

    printf("\nMovimento do Cavalo com condições e controle:\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            int nx = x + dx[i];
            int ny = y + dy[j];

            if (nx < 0 || nx >= TAB || ny < 0 || ny >= TAB) {
                continue; // ignora fora do tabuleiro
            }

            // Simulando um obstáculo hipotético
            if (nx == 2 && ny == 6) {
                printf("⛔ Obstáculo em (%d, %d) — parando\n", nx, ny);
                break; // simula bloqueio
            }

            printf("Cavalo -> (%d, %d)\n", nx, ny);
        }
    }
}

int main() {
    printf("=== Desafio MateCheck - Nível Mestre ===\n\n");

    // Posições de exemplo para cada peça
    int bispoX = 5, bispoY = 2;
    int torreX = 3, torreY = 1;
    int rainhaX = 6, rainhaY = 6;
    int cavaloX = 4, cavaloY = 4;

    // Executa as funções recursivas
    printf("Movimento do Bispo:\n");
    moverBispo(bispoX, bispoY, 5);

    printf("\nMovimento da Torre:\n");
    moverTorre(torreX, torreY, 5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(rainhaX, rainhaY, 8);

    // Cavalo com múltiplas condições, continue/break
    moverCavaloComCondicoes(cavaloX, cavaloY);

    return 0;
}
