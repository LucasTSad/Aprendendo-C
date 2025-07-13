#include <stdio.h>
#include <string.h>

int main(){

    int idade = 0;
    float gpa = 0.0f;
    char nota = '\0';
    char nome[30] = "";

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu gpa: ");
    scanf("%f", &gpa);

    printf("Digite sua nota: ");
    scanf(" %c", &nota);

    getchar();
    printf("Digite seu nome: ");
    //scanf(" %[^\n]", &nome);
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome) -1] = '\0';

    printf("Seu Nome: %s\n", nome);
    printf("Idade: %d Anos\n", idade);
    printf("GPA: %.1f\n", gpa);
    printf("Nota: %c\n", nota);

    return 0;

}