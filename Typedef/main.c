#include <stdio.h>

typedef int numero;
typedef char string[50];
typedef char iniciais[3];

int main () {

    numero x = 10;
    numero y = 20;
    numero z = x + y;

    printf("%d\n", z);

    string nome = "Lucas Sad";

    printf("%s\n", nome);

    iniciais user1 = "LS";

    printf("%s\n", user1);

    return 0;

}