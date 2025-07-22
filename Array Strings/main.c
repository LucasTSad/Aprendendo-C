#include <stdio.h>
#include <string.h>

int main() {

    char frutas[][10] = {"Banana", "Morango", "Laranja", "Abacaxi"};
    int tamanho = sizeof(frutas) / sizeof(frutas[0]);

    char nomes[4][25] = {0};
    int tamanho2 = sizeof(nomes) / sizeof(nomes[0]);

    for (int i = 0; i < tamanho2; i++) {

        printf("Digite seu nome: ");
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strlen(nomes[i]) - 1] = '\0';

    }

    for (int i = 0; i < tamanho2; i++) {
        
        printf("%s\n", nomes[i]);

    }

    printf("\n");

    for (int i = 0; i < tamanho; i++) {
        
        printf("%s\n", frutas[i]);

    }

    return 0;

}