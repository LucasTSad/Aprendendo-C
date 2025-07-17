#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getEscolhaComputador();
int getEscolhaJogador();
void Vencedor(int escolhaJogador, int escolhaComputador);

int main() {

    srand(time(NULL));

    printf("***PEDRA PAPEL E TESOURA***\n");

    int escolhaJogador = getEscolhaJogador();
    int escolhaComputador = getEscolhaComputador();

    switch(escolhaJogador){

        case 1:

            printf("Voce escolheu PEDRA\n");

            break;

        case 2:

            printf("Voce escolheu PAPEL\n");

            break;

        case 3:

            printf("Voce escolheu TESOURA\n");

            break;

    } 

    switch(escolhaComputador){

        case 1:

            printf("O computador escolheu PEDRA\n");

            break;

        case 2:

            printf("O computador escolheu PAPEL\n");

            break;

        case 3:

            printf("O computador escolheu TESOURA\n");

            break;

    }

    Vencedor(escolhaJogador, escolhaComputador);

    return 0;

}


int getEscolhaComputador(){

    return (rand() % 3) + 1;

}

int getEscolhaJogador(){

    int escolha = 0;

    do{

        printf("Escolha uma opcao: \n");
        printf("1. Pedra\n");
        printf("2. Papel\n");
        printf("3. Tesoura\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

    }while( escolha < 1 || escolha > 3 );

    return escolha;
    
}

void Vencedor(int escolhaJogador, int escolhaComputador){

    if( escolhaJogador == escolhaComputador ){

        printf("Empate!\n");

    }
    else if ( escolhaJogador == 1 && escolhaComputador == 3 ) {

        printf("Voce ganhou!\n");

    }
    else if ( escolhaJogador == 2 && escolhaComputador == 1 ) {

        printf("Voce ganhou!\n");

    }
    else if ( escolhaJogador == 3 && escolhaComputador == 2 ) {

        printf("Voce ganhou!\n");

    }
    else {

        printf("Voce perdeu!\n");

    }
    
}