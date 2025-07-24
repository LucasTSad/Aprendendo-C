#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct  {

    char nome[50];
    int idade;
    float nota;
    bool trabalha;

}Estudante;

void printEstudante(Estudante estudante);

int main () {

    Estudante estudante1 = {"Lucas", 25, 9.5, true};
    Estudante estudante2 = {"Bernardo", 22, 7.7, false};
    Estudante estudante3 = {0};

    strcpy(estudante3.nome, "Gustavo");
    estudante3.idade = 28;
    estudante3.nota = 8.9;
    estudante3.trabalha = true; 

    printEstudante(estudante1);
    printEstudante(estudante2);
    printEstudante(estudante3);

    return 0;

}

void printEstudante(Estudante estudante) {

    printf("Nome: %s\n", estudante.nome);
    printf("Idade: %d\n", estudante.idade);
    printf("Nota: %.1f\n", estudante.nota);
    printf("Trabalha: %s\n", estudante.trabalha ? "Sim" : "Nao");
    printf("----------------\n");

}