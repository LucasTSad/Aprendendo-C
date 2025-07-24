#include <stdio.h>

void anivi(int* idade);

int main () {

    int idade = 20;
    int *pIdade = &idade; // ou int* pIdade = &idade;

    printf("Idade: %d\n", idade);
    anivi(pIdade);
    printf("Idade: %d\n", idade);

    return 0;

}

void anivi(int* idade) {

    (*idade) ++;

}