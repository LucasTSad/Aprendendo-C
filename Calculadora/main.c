#include <stdio.h>

int main() {

    char op = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double resultado = 0.0;

    printf("Calculadora\n");

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite qual operacao deseja realizar (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    switch (op) {
        case '+':

            resultado = num1 + num2;
            printf("O resultado da conta:\n%.2lf + %.2lf = %.2lf", num1,num2,resultado);

            break;

        case '-':

            resultado = num1 - num2;
            printf("O resultado da conta:\n%.2lf - %.2lf = %.2lf", num1,num2,resultado);

            break;

        case '*':

            resultado = num1 * num2;
            printf("O resultado da conta:\n%.2lf * %.2lf = %.2lf", num1,num2,resultado);

            break;

        case '/':
        
            if(num2 == 0) {

                printf("Nao eh possivel dividir por zero\n");

            } else {

                resultado = num1 / num2;
                printf("O resultado da conta:\n%.2lf / %.2lf = %.2lf", num1,num2,resultado);

            }

            break;
        default:
            printf("Operacao invalida\n");
    }

    return 0;

}