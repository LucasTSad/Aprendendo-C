#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int idade = 0;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    while ((getchar()) != '\n'); 

    if (idade < 0) {
        printf("Idade invalida\n");
    } else if (idade == 0) {
        printf("Voce eh um recem nascido\n");
    } else if (idade < 18) {
        printf("Voce eh menor de idade\n");
    } else if (idade < 65) {
        printf("Voce eh maior de idade\n");
    } else {
        printf("Voce eh idoso\n");
    }

    bool ehEstudante = true;

    if (ehEstudante) {
        printf("Voce eh estudante\n");
    } else {
        printf("Voce nao eh estudante\n");
    }

    char nome[50];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    if (strlen(nome) == 0) {
        printf("Nome nao digitado\n");
    } else {
        printf("Seu nome eh %s\n", nome);
    }

    return 0;
}
