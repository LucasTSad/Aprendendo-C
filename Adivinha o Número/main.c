#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {

    srand(time(NULL));

    int chute = 0;
    int tentativas = 0;
    int min = 1;
    int max = 100;

    int resposta = ( rand() % ( max - min + 1 ) ) + min;

    printf("*** Jogo de Adivinhacao ***\n");

    do {

        printf("Digite um numero entre %d - %d: ", min, max);
        scanf("%d", &chute);

        tentativas ++;

        if(chute < resposta) {

            printf("Voce chutou baixo!\n");

        }
        else if(chute > resposta) {

            printf("Voce chutou alto!\n");

        }
        else {

            printf("Voce acertou!\n");

        }

    }while(chute != resposta);

    printf("O numero era %d!\n", resposta);
    printf("Parabens, voce acertou em %d tentativas!\n", tentativas);

    return 0;

}