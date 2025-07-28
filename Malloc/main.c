#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero = 0;

    printf("Digite o numero de notas: ");
    scanf("%d", &numero);

    char *notas = malloc(numero * sizeof(char));

    if(notas == NULL) {

        printf("Erro ao alocar memoria\n");

        return 1;

    }

    for(int i = 0; i < numero; i++) {

        printf("Digite a nota #%d: ", i + 1);
        scanf(" %c", &notas[i]);

    }

    for(int i = 0; i < numero; i++) {
        
        printf("Nota #%d: %c\n", i + 1, notas[i]);

    }

    free(notas);

    notas = NULL;
    
    return 0;

}