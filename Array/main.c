#include <stdio.h>
#include <string.h>

int main () {

    int numeros[] = {10, 20, 30, 40, 50};
    char notas[] = {'A', 'B', 'C', 'D', 'F'};
    char nome[] = "Lucas";

    numeros[0] = 100;
    numeros[1] = 200;
    numeros[2] = 300;
    numeros[3] = 400;
    numeros[4] = 500;

    // printf("%d\n", numeros); pointer

    printf("%d\n", numeros[0]);
    printf("%d\n", numeros[1]);
    printf("%d\n", numeros[2]);
    printf("%d\n", numeros[3]);
    printf("%d\n\n", numeros[4]);

    for(int i = 0; i < strlen(nome); i++) {

        printf("%c ", nome[i]);

    }

    printf("\n");

    for(int i = 0; i < 5; i++) {

        printf("%c ", notas[i]);

    }

    printf("\n");

    printf("%d", sizeof(numeros));

    return 0;

}