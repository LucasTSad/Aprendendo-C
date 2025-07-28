#include <stdio.h>

int main(){

    FILE *pArquivo = fopen("arquivo.txt", "w");

    char texto[] = "Esse é um arquivo txt!";

    if(pArquivo == NULL){

        printf("Erro ao abrir o arquivo\n");

        return 1;

    }

    fprintf(pArquivo, "%s", texto);

    printf("Arquivo criado com sucesso!\n");

    fclose(pArquivo);

    return 0;

}