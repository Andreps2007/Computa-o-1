#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[100], bairro[100], senha[200] = "";
    printf("Digite seu nome:\n");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite seu bairro:\n");
    fgets(bairro, sizeof(bairro), stdin);


    nome[strcspn(nome, "\n")] = '\0';
    bairro[strcspn(bairro, "\n")] = '\0';

    for (int i = 0; nome[i] != '\0'; i++) {
        char c = toupper(nome[i]);
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            strncat(senha, &c, 1);
        }
    }

    for (int i = 0; bairro[i] != '\0'; i++) {
        char c = toupper(bairro[i]);
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            strncat(senha, &c, 1);
        }
    }

    printf("Senha gerada: %s\n", senha);
    return 0;
}
