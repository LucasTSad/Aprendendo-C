#include <stdio.h>

int main(){

    char item[50] = "";
    float preco = 0.0f;
    int quantidade = 0;
    char currency = '$';
    float total = 0.0f;

    printf("Qual item voce deseja comprar?:");
    scanf(" %[^\n]", &item);

    printf("Qual e o preco de cada um?:");
    scanf("%f", &preco);

    printf("Quantos itens deseja comprar?:");
    scanf("%d", &quantidade);

    total = preco * quantidade;

    printf("Voce comprou %d %s's por %.2f%c.\nTotalizando %.2f %c\n", quantidade, item, preco, currency, total, currency);

    return 0;

}