#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero = 0;
    printf("Digite o numero de jogadores: ");
    scanf("%d", &numero);

    int *pPontos = calloc(numero, sizeof(int));

    if(pPontos == NULL) {

        printf("Erro ao alocar memoria\n");
        return 1;

    }

    for(int i = 0; i < numero; i++) {

        printf("Digite o ponoto #%d: ", i + 1);
        scanf("%d", &pPontos[i]);

    }

    for(int i = 0; i < numero; i++) {

        printf("%d ", pPontos[i]);

    }

    free(pPontos);
    
    pPontos = NULL;

    return 0;

}