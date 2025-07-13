#include <stdio.h>
#include <math.h>

int main(){

    double capital = 0.0;
    double taxa = 0.0;
    int anos = 0;
    int vezes = 0;
    double total = 0.0;

    printf("Calculadora de Juros Compostos\n");

    printf("Digite o capital: ");
    scanf("%lf", &capital);

    printf("Digite a taxa de juros % : ");
    scanf("%lf", &taxa);
    taxa = taxa / 100;

    printf("Digite quantos anos: ");
    scanf("%d", &anos);

    printf("Digite quantas vezes a taxa de juros sera capitalizada por ano: ");
    scanf("%d", &vezes);

    total = capital * pow(1 + taxa/vezes, vezes * anos);

    printf("Depois de %d Anos. O valor final com juros compostos sera: $%.2lf\n", anos, total);

    return 0;
}