#include <stdio.h>

// Void da Torre (Direita)
void torre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    torre(casas - 1);
}

// Void da Rainha (Esquerda)
void rainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    rainha(casas - 1);
}

// Função recursiva (até q casa == 0)
void bisporecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    bisporecursivo(casas - 1);
}

// loops aninhados para o Bispo 
void bispocomloops(int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) { //linha do tabuleiro
        for (int j = 0; j < colunas; j++) { // colunas do tabuleiro
            if (i == j) { // Casas na diagonal, quando as coordenadas (x,y) forem iguais, executar...
                printf("Cima, Direita\n");
            }
        }
    }
}

// Void cavalo 
void cavalo() {
    printf("Movimentos do Cavalo:\n");
    for (int i = 0; i < 2; i++) { // enquanto 0 for menor que 2, imprime "Cima"
        printf("Cima\n");
        if (i == 1) {
            for (int j = 0; j < 1; j++) { //enquanto 0 for menor que 1, imprime "Direita"
                if (j == 0) {
                    printf("Direita\n");
                    break; 
                }
            }
        }
    }
    printf("\n");
}

/******************************************************************************************/

int main() {
    // Torre
    printf("Movimentos da Torre:\n");
    torre(5); // 5 casas para a direita
    printf("\n");

    // Bispo 
    printf("Movimentos do Bispo (Recursivo):\n");
    bisporecursivo(5); // 5 casas na diagonal
    printf("\n");

    // Rainha
    printf("Movimentos da Rainha:\n");
    rainha(8); // 8 casas para a esquerda
    printf("\n");

    // Cavalo
    cavalo();

    return 0;
}



