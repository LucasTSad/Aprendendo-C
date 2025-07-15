#include <stdio.h>
#include <stdbool.h>

int main() {

    float preco = 10.00;
    bool ehEstudante = false;
    bool ehSenior = false;

    if(ehEstudante) {

        if (ehSenior) {
            printf("Voce ganha um desconto de estudante de 10%%\n");
            printf("Voce ganha um desconto de Senior de 20%%\n");

            preco *= 0.7;

        } else {

            printf("Voce ganha um desconto de estudante de 10%%\n");
            preco *= 0.9;

        }    

    } else {

        if (ehSenior) {
            printf("Voce ganha um desconto de Senior de 20%%\n");
            preco *= 0.8;
        }

    }

    printf("O preco final eh R$%.2f\n", preco);

    return 0;

}