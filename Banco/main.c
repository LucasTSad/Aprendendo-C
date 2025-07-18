#include <stdio.h>

void vereficarSaldo(float saldo);
float depositar();
float sacar(float saldo);

int main () {

    int escolha = 0;
    float saldo = 0.0f;

    printf("***Bem vindo ao banco!***\n");

    do{

        printf("\n1. Verificar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &escolha);

        switch(escolha) {

            case 1:

                vereficarSaldo(saldo);
                break;

            case 2:

                saldo += depositar();
                break;

            case 3:

                saldo -= sacar(saldo);
                break;

            case 4:

                printf("Obrigado por usar o banco!");
                break;

            default:

                printf("Opcao invalida!");

        }

    }while(escolha != 4);


    return 0;

}

void vereficarSaldo(float saldo) {

    printf("Seu saldo eh: R$%.2f\n", saldo);
    
}

float depositar() {

    float valor = 0.0f;

    printf("Digite o valor a ser depositado: ");
    scanf("%f", &valor);

    if (valor < 0) {
        
        printf("Valor invalido!\n");
        return 0.0f;
        
    }
    else {

        printf("Deposito realizado com sucesso!\n");
        printf("Seu saldo eh: R$%.2f\n", valor);
        return valor;

    }

}

float sacar(float saldo) {
    
    float valor = 0.0f;

    printf("Digite o valor a ser sacado: ");
    scanf("%f", &valor);

    if ( valor > saldo) {

        printf("Saldo insuficiente!\n");
        return 0.0f;

    }
    else {

        printf("Saque realizado com sucesso!\n");
        printf("Seu saldo eh: R$%.2f\n", saldo - valor);
        return valor;

    }

}