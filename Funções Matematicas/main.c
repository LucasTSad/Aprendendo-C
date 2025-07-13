#include <stdio.h>
#include <math.h>

int main(){

    int x = 9;
    int y = 2;
    float z1 = 3.14;
    float z2 = 3.59;
    float z3 = 3.99;
    int w = -4;
    float e = 3;
    float q = 45;
    float r = 45;
    float t = 45;
    
    x = sqrt(x); // raiz
    printf("%d\n", x);

    y = pow(y, 2); // potencia
    printf("%d\n", y);
    
    z1 = round(z1); // arredonda
    printf("%f\n", z1);

    z2 = ceil(z2); // arredonda para cima
    printf("%f\n", z2);

    z3 = floor(z3); // arredonda para baixo
    printf("%f\n", z3);

    w = abs(w); // valor absoluto
    printf("%d\n", w);

    e = log(e); // log
    printf("%f\n", e);

    q = sin(q); // seno
    printf("%f\n", q);

    r = cos(r); // cosseno
    printf("%f\n", r);

    t = tan(t); // tangente
    printf("%f\n", t);

    return 0;
}