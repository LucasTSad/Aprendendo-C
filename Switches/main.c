#include <stdio.h>

int main (){

    int diaDaSemana = 0;

    printf("Digite o dia da semana (1-7): ");
    scanf("%d", &diaDaSemana);
    
    switch(diaDaSemana) {
        case 1:
            printf("Hoje eh Segunda-Feira\n");
            break;
        case 2:
            printf("Hoje eh Terca-Feira\n");
            break;
        case 3:
            printf("Hoje eh Quarta-Feira\n");
            break;
        case 4:
            printf("Hoje eh Quinta-Feira\n");
            break;
        case 5:
            printf("Hoje eh Sexta-Feira\n");
            break;
        case 6:
            printf("Hoje eh Sabado\n");
            break;
        case 7:
            printf("Hoje eh Domingo\n");
            break;
        default:
            printf("Dia da semana invalido\n");
            break;
    }

    return 0;

}