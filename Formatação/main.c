#include <stdio.h>

int main(){

    int age = 25;
    float preco = 19.99;
    double pi = 3.141592653;
    char currency = '$';
    char nome[] = "Lucas Sad";

    printf("Idade: %d\n", age);
    printf("Preco: %.2f\n", preco);
    printf("Pi: %.5lf\n", pi);
    printf("Moeda: %c\n", currency);
    printf("Nome: %s\n", nome);

    //largura

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = -1000;

    printf("num1: %-4d\n", num1);
    printf("num2: %04d\n", num2);
    printf("num3: %4d\n", num3);
    printf("num4: %+4d\n", num4);

    //precisão

    float valor1 = 19.23;
    float valor2 = 13.234;
    float valor3 = -29.2345;

    printf("valor1: %.2f\n", valor1);
    printf("valor2: %.3f\n", valor2);
    printf("valor3: %.4f\n", valor3);

    //juntando precisão e largura

    printf("num1: %4.2d\n", num1);
    printf("valor2: %+4.2f\n", valor2); 
    

    return 0;

}