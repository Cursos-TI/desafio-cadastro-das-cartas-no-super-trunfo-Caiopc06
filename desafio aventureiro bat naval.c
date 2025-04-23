// Programa feito por: Caio Pereira Cavalcanti
// Data: 17/04/25
// Desafio aventureiro Jogo de Batalha Naval
#include <stdio.h>

int main () {

    int i, j; // declarando variáveis
    int tabuleiro [10][10] = { // matriz que irá representar o tabuleiro
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    int navio1[3] = {3, 3, 3}; // vetor correspondente ao navio 1
    int navio2[3] = {3, 3, 3}; // vetor correspodente ao navio 2
    int navio3[3] = {3, 3, 3}; // vetor correspondente ao navio 3
    int navio4[3] = {3, 3, 3}; // vetor correspodente ao navio 4


    for (i = 0; i < 1; i++) { // posicionando o primeiro navio (horizontal)
        for (j = 0; j < 3; j++) {
            tabuleiro[i][j] = navio1[j];
        }
    }

    for (j = 7; j < 8; j++) { // posicionando o segundo navio (vertical)
        for (i = 5; i < 8; i++) {
            tabuleiro[i][j] = navio2[0];
        }
    }

    for (i = 2; i < 5; i++){ // posicionando o terceiro navio (diagonal)
        tabuleiro[i][i-2] = navio3[0];
    }

    for (i = 7; i < 10; i++){ // posicionando o quarto navio (diagonal)
        tabuleiro[i][i-3] = navio4[0];
    }

    for (i = 0; i < 10; i++) { // exibindo o tabuleiro
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}