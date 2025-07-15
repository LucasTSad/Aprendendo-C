#include <stdio.h>

int main() {

    int escolha = 0;
    float lbs = 0.0f;
    float kg = 0.0f;

    printf("Conversor de Peso\n");
    printf("1. kg para lbs\n");
    printf("2. lbs para kg\n");
    printf("Escolha uma opcao (1 ou 2 ) : ");
    scanf("%d", &escolha);

    if ( escolha == 1 ) {

        printf("Digite o peso em kg: ");
        scanf("%f", &kg);

        lbs = kg * 2.20462;

        printf("Peso em lbs: %.2flbs\n", lbs);

    } else if ( escolha == 2 ) {

        printf("Digite o peso em lbs: ");
        scanf("%f", &lbs);

        kg = lbs / 2.20462;

        printf("Peso em kg: %.2fkg\n", kg);

    } else {
        
        printf("Opcao invalida\n");

    }

    return 0;

}