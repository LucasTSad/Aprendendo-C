#include <stdio.h>

int main () {

    int linhas = 0;
    int colunas = 0;
    char simbolo = '\0';

    printf("Digite o # de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o # de colunas: ");
    scanf("%d", &colunas);

    printf("Digite o simbolo: ");
    scanf(" %c", &simbolo);

    for(int i= 0; i < linhas; i++) {

        for (int j = 0; j < colunas; j++) {

            printf("%c", simbolo);
            
        }

        printf("\n");

    }

    return 0;

}