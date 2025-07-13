#include <stdio.h>
#include <math.h>

int main(){

    double raio = 0.0;
    double area = 0.0;
    double area_esfera = 0.0;
    double volume = 0.0;
    const double PI = 3.14159; // const para declarar uma constante para nao ser alterada

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    area = PI * pow(raio, 2); // pow para elevar ao quadrado
    area_esfera = 4 * PI * pow(raio, 2);
    volume = (4.0 / 3.0) * PI * pow(raio, 3);

    printf("Area do circulo: %.2lfcm\n", area);
    printf("Area da esfera: %.2lfcm\n", area_esfera);
    printf("Volume do circulo: %.2lfcm\n", volume);

    return 0;
}