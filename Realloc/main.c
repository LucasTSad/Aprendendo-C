#include <stdio.h>
#include <stdlib.h>

int main () {

    int numero = 0;

    printf("Digite o numero de precos: ");
    scanf("%d", &numero);

    float *pPrecos = malloc(numero * sizeof(float));

    if(pPrecos == NULL) {

        printf("Erro ao alocar memoria\n");

        return 1;

    }

    for (int i = 0; i < numero; i++) {

        printf("Digite o preco #%d: ", i + 1);
        scanf("%f", &pPrecos[i]);

    }

    int novoNumero = 0;

    printf("Digite outro numero de preco: ");
    scanf("%d", &novoNumero);

    float *pTemp = realloc(pPrecos, novoNumero * sizeof(float));

    if(pTemp == NULL) {

        printf("Erro ao realocar memoria\n");

    }
    else {

        pPrecos = pTemp;
        pTemp = NULL;

        for (int i = numero; i < novoNumero; i++) {
            
            printf("Digite o preco #%d: ", i + 1);
            scanf("%f", &pPrecos[i]);

        }

        for (int i = 0; i < novoNumero; i++) {

            printf("Preco #%d: R$%.2f\n", i + 1, pPrecos[i]);
        
        }

    }



    free(pPrecos);
    pPrecos = NULL;

    return 0;

}