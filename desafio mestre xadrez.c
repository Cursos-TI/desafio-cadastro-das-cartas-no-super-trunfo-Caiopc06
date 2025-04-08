#include <stdio.h>

void Torre(int i){
    i = 1;
    while (i <= 5){
        printf("A torre andou para: Direita (%d casas).\n", i);
        i += 1;
    }
}

void Rainha(int i){
    i = 1;
    while (i <= 8){
        printf("A Rainha andou para: Esquerda (%d casas).\n", i);
        i += 1;
    }
}

void Bispo(char i[50], char j[50], int n){
    n = 1;
    for (char i[50] = "cima", j[50] = "direita"; n <= 5; n++){
        printf("O Bispo andou para: %s, %s (%d casas).\n", i, j, n);
    }
}

void Cavalo(char i[50], char j[50], int n){
    for (char i[50] = "cima", j[50] = "direita", n = 2; n <= 5;){
        printf("Cavalo andou para: %s (%d casas), %s (%d casa).\n", i, n, j, n-1);
        n = n + 4;
    }
}


int main() {

    int numero = 1;
    char cima[50] = "cima";
    char direcao[50] = "Direita";

    printf("Jogo do xadrez: \n");
    printf("\n");

    Torre(numero);
    printf("\n");

    Rainha(numero);
    printf("\n");

    Bispo(cima, direcao, numero);
    printf("\n");

    Cavalo(cima, direcao, numero);
    printf("\n");

    return 0;
}