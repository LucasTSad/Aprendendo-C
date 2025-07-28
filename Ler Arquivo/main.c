#include <stdio.h>

int main(){

    FILE *pArquivo = fopen("input.txt", "r");

    char buffer[1024] = {0};

    if(pArquivo == NULL){

        printf("Erro ao abrir o arquivo\n");

        return 1;

    }

    while(fgets(buffer, sizeof(buffer), pArquivo) != NULL){

        printf("%s", buffer);

    }

    fclose(pArquivo);

    return 0;

}