#include <stdio.h>
#include <stdbool.h>

void ola(char nome[], int idade);
bool maiorDeIdade(int idade);

int main () {

    ola("Bob Esponja", 25);

    if(maiorDeIdade(12)) {

        printf("Voce tem a idade adequada para trabalhar no Siri Cascudo\n");

    } else {

        printf("Voce NAO tem a idade adequada para trabalhar no Siri Cascudo.Deve ser 16+ para trabalhar\n");

    }

    return 0;

}

void ola(char nome[], int idade) {

    printf("Ola %s, voce tem %d anos\n", nome, idade);

}

bool maiorDeIdade(int idade) {

    return idade >= 16;

}