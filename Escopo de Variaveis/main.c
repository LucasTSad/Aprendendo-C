#include <stdio.h>

//int resultado = 0; Escopo Global (Visivel em todo o programa e dificil de debugar)

int soma(int x, int y) {

    int resultado = x + y;

    return resultado;

}

int subtrair(int x, int y) {

    int resultado = x - y;

    return resultado;

}

int main() {

    int x = 3;
    int y = 4;

    int resultado = subtrair(x,y);

    printf("%d\n", resultado);

    return 0;

}