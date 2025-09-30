#include <stdio.h>

#define TAM 10   // tamanho  do tabuleiro (10x10)
#define NAVIO 3  // tamanho  do navio (3 casas)

int main() {
    int tabuleiro[TAM][TAM]; 
    int i, j;

    // -----------------------------
    // Inicializa o tabuleiro com água (0)
    // -----------------------------
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // -----------------------------
    // Definindo coordenadas iniciais dos navios
    // -----------------------------
    int linhaHorizontal = 2, colunaHorizontal = 3; // navio horizontal
    int linhaVertical = 5, colunaVertical = 7;     // navio vertical

    // -----------------------------
    // Posiciona o navio horizontal
    // -----------------------------
    for (j = 0; j < NAVIO; j++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + j] = 3;
    }

    // -----------------------------
    // Posiciona o navio vertical
    // -----------------------------
    for (i = 0; i < NAVIO; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = 3;
    }

    // -----------------------------
    // Exibindo o tabuleiro
    // -----------------------------
    printf("    ");
    for (j = 0; j < TAM; j++) {
        printf(" %c", 'A' + j); // cabeçalho A–J
    }
    printf("\n");

    for (i = 0; i < TAM; i++) {
        printf("%2d ", i + 1); // numeração das linhas (1–10)
        for (j = 0; j < TAM; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
