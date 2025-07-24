#include <stdio.h>

typedef enum  {

    DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO

}DiasSemana;

enum Status {

    ATIVO = 1, INATIVO = 2, PENDENTE = 3

};

void conectarStatus(enum Status status);

int main () {

    DiasSemana hoje = DOMINGO;

    if (hoje == DOMINGO || hoje == SABADO){

        printf("Hoje eh fim de semana\n");
    }
    else{

        printf("Hoje eh dia util\n");
    }

    enum Status status = ATIVO;

    conectarStatus(status);

    return 0;

}

void conectarStatus(enum Status status){

    switch(status){

        case ATIVO:
            printf("Status ativo\n");
            break;
        case INATIVO:
            printf("Status inativo\n");
            break;
        case PENDENTE:
            printf("Status pendente\n");
            break;

    };

}