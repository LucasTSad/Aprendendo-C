#include <stdio.h>
#include <ctype.h>

int main() {

    char perguntas[][100] = {"Qual eh o maior planeta no sistema solar?",
                             "Qual eh o planeta mais quente do sistema solar?",
                             "Qual eh o planeta tem mais luas?",
                             "Qual eh o menor planeta do sistema solar?"};

    char opcoes[][100] = {"A. Terra\nB. Marte\nC. Jupiter\nD. Saturno\n",
                             "A. Venus\nB. Jupiter\nC. Marte\nD. Mercurio\n",
                             "A. Jupiter\nB. Marte\nC. Terra\nD. Saturno\n",
                             "A. Terra\nB. Mercurio\nC. Saturno\nD. Plutao\n"};

    char respostas[] = {'C', 'A', 'D', 'B'};

    int countPerguntas = sizeof(perguntas) / sizeof(perguntas[0]);

    char resposta = '\0';

    int pontos = 0;

    printf("*** Quiz do Sistema Solar ***\n");

    for (int i = 0; i < countPerguntas; i++) {

        printf("\n%s\n", perguntas[i]);
        printf("\n%s\n", opcoes[i]);
        printf("Resposta: ");
        scanf(" %c", &resposta);

        resposta = toupper(resposta);

        if(resposta == respostas[i]) {

            printf("Acertou!\n");
            pontos++;

        }
        else {

            printf("Errou!\n");

        }

    }

    printf("Voce acertou %d pontos de %d!\n", pontos, countPerguntas);

    return 0;

}