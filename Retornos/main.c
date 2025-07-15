#include <stdio.h>
#include <stdbool.h>

double cubo(double num){

    return num * num * num;
}

double quadrado(double num){

    return num * num;
    
}

bool maiorDeIdade(int idade){

    if(idade >= 18) {

        return true;

    }
    else {

        return false;

    }
    
}

int pegarMaior(int x, int y) {

    if(x > y) {

        return x;

    }
    else {

        return y;
        
    }

}

int main() {

    double x = quadrado(2.1);
    double y = cubo(4.2);
    double z = quadrado(8.3);

    printf("%.2lf\n", x);
    printf("%.2lf\n", y);
    printf("%.2lf\n", z);

    int idade = 18;

    if(maiorDeIdade(idade)){

        printf("Maior de idade\n");

    }
    else {

        printf("Menor de idade\n");

    }

    int max = pegarMaior(30, 20);

    printf("%d\n", max);

    return 0;

}