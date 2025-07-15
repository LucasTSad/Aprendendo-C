#include <stdio.h>
#include <string.h>

void happyBirthday (char aniversariante[], int anos) {

    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday dear %s!", aniversariante);
    printf("\nHappy Birthday to you!");
    printf("\nYou are %d years old!\n", anos);

}

int main () {

    char nome[50] = "";
    int idade = 0;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome) - 1] = '\0'; 

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    happyBirthday(nome, idade);

    return 0;

}