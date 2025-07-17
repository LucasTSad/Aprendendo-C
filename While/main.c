#include <stdio.h>
#include <string.h>

int main () {

    char nome[50] = "";

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome) - 1] = '\0';

    while(strlen(nome) == 0) {

        printf("Nome nao pode estar vazio, digite novamente: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strlen(nome) - 1] = '\0';

    }

    printf("Ola %s, seja bem vindo\n", nome);

    return 0;

}