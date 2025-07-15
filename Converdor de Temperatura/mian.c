#include <stdio.h>

int main () {

    char escolha = '\0';
    float celsius = 0.0f;
    float fahrenheit = 0.0f;

    printf("Conversor de Temperatura\n");    
    printf("C. Celsius para Fahrenheit\n");
    printf("F. Fahrenheit para Celsius\n");
    printf("Escolha uma opcao (C ou F ) : ");
    scanf("%c", &escolha);

    if ( escolha == 'C' || escolha == 'c' ) {

        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &celsius);

        fahrenheit = (celsius * 9 / 5) + 32;

        printf("Temperatura em Fahrenheit: %.1fF\n", fahrenheit);

    } else if ( escolha == 'F' || escolha == 'f' ) {
        
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &fahrenheit);

        celsius = (fahrenheit - 32) * 5 / 9;

        printf("Temperatura em Celsius: %.1fC\n", celsius);

    } else {

        printf("Opcao invalida\n");

    }

    return 0;

}