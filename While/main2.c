#include <stdio.h>
#include <stdbool.h>

int main() {

    bool estaRodando = true;
    char resposta = '\0';

    do {
        
        printf("Voce esta jogando um jogo\n");
        printf("Gostaria de continuar? (S = sim /N = nao): ");
        scanf(" %c", &resposta);

        if (resposta != 'S' && resposta != 's') {
            estaRodando = false;
        }

    }  while (estaRodando) ;

    printf("Obrigado por jogar!\n");

    return 0;
}