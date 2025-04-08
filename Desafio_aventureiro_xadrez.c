#include <stdio.h>

int main(){

    int i, j;
    i = 1;
    int k = 1;

    while (i > 0){
        int x = 1;
        while (i > 0){
            if(k == 1){
                while (x <= 5){
                    printf("A torre andou para: Direita (%d casas)\n", x);
                    x = x + 1;
                }
            }
            x = 1;
            printf("\n");
            if (k == 1){
                while (x <= 5){
                    printf("O bispo andou para: Cima, Direita (%d casas)\n", x);
                    x = x + 1;
                }
            }
            x = 1;
            printf("\n");
            if (k == 1){
                while (x <= 8){
                    printf("A rainha andou para: Esquerda (%d casas)\n", x);
                    x = x + 1;
                }
            }
        i = i - 1;
        }
    i = i - 1;
    }

    return 0;
}