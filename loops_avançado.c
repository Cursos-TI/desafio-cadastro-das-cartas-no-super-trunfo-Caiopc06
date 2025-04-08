#include <stdio.h>

int main (){

    for (int i = 0, j = 10; i < j; i ++, j--){
        printf(" i = %d, j = %d \n", i, j);
        if (i == 0) continue;
        if (i == 5) break;
    }

    return 0;
}