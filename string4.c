#include <stdio.h>
#include <string.h>

int main() {
    char nome[200];
    printf("Digite seu nome completo:\n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    char *palavra = strtok(nome, " ");

    while (palavra != NULL) {
        if (strlen(palavra) <= 2) {
            printf("%s ", palavra);  // não abrevia
        } else {
            printf("%c. ", palavra[0]);  // pega a inicial + ponto
        }
        palavra = strtok(NULL, " ");
    }

    printf("\n");
    return 0;
}
