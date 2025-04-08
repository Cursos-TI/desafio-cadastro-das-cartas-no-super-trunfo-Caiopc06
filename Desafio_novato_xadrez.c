#include <stdio.h>

int main(){

    int i = 1;

    while (i <= 5){
        printf("A torre andou para: Direita (%d casas)\n", i);
        i = i + 1;
    }

    printf("\n");
    i = 1;

    do {
        printf("O bispo andou para: Cima, Direita (%d casas)\n", i);
        i = i + 1;
     } while(i <= 5);

    printf("\n");

    for (i = 1; i <= 8; i++){
        printf("A rainha andiou para: Esquerda (%d casas)\n", i);
    }

    return 0;
}