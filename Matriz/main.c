#include <stdio.h>

int main () {

    int pontos[5] = {0};

   

    for(int i = 0; i < 5; i++) {

        printf("Digite os pontos: \n");
        scanf("%d", &pontos[i]);

    }

    for(int i = 0; i < 5; i++) {

        printf("%d ", pontos[i]);

    }

    return 0;

}