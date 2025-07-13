#include <stdio.h>
#include <stdbool.h>

int main(){

    //int 

    int idade = 25;
    int ano = 2025;
    int quantidade = 1;

    printf("Você é tem %d anos\n", idade);
    printf("O ano é %d\n", ano);
    printf("Você comprou %dx itens\n", quantidade);

    //float

    float gpa = 3.8;
    float preco = 10.99;
    float temperatura = 25.5;

    printf("Seu gpa é %.1f\n", gpa);
    printf("O preco do produto é R$%.2f\n", preco);
    printf("A temperatura atual é %.1f°C\n", temperatura);

    //double

    double pi = 3.1415926535897932384626433832795;
    double e = 2.7182818284590452353602874713527;

    printf("O valor de pi é %.17lf\n", pi);
    printf("O valor de e é %.17lf\n", e);

    //char

    char nota = 'A';
    char simbolo = '#';
    char currency = '$';

    printf("Sua nota é %c\n", nota);
    printf("Seu simbolo é %c\n", simbolo);
    printf("Seu simbolo de moeda é %c\n", currency);

    //char[]

    char name[] = "Lucas Sad";
    char comida[] = "pizza";
    char email[] = "lucas.sad@jf.senai.br";

    printf("Seu nome é %s\n", name);
    printf("Sua comida favorita é %s\n", comida);
    printf("Seu email é %s\n", email);

    //bool

    bool isOnline = true;
    bool isAdmin = false;

    printf("Está online? %d\n", isOnline);
    printf("É admin? %d\n", isAdmin);

    return 0;
}