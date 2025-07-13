#include <stdio.h>
#include <string.h>

int main(){


    char noun[50] = "";
    char verb[50] = "";
    char adj1[50] = "";
    char adj2[50] = "";
    char adj3[50] = "";

    printf("Digite um adjetivo (descricao): ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strlen(adj1) - 1] = '\0';

    printf("Digite um noun (animal ou pessoa): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Digite um adjetivo (descricao): ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strlen(adj2) -1] = '\0';

    printf("Digite um verbo: ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Digite um adjetivo (descricao): ");
    fgets(adj3, sizeof(adj3), stdin);
    adj3[strlen(adj3) - 1] = '\0';

    printf("\nHoje eu fui a um passeio com %s. Eu estava %s e %s. E %s estava %s muito %s.\n", noun, adj1, adj2, noun, verb, adj3);

    return 0;
}