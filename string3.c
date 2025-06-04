#include <stdio.h>
#include <ctype.h>
#include <string.h>

int eh_vogal(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void gerar_senha(char nome[], char bairro[]) {
    char senha[100] = "";

    for (int i = 0; nome[i] != '\0'; i++) {
        if (eh_vogal(nome[i]))
            strncat(senha, &nome[i], 1);
    }

    for (int i = 0; bairro[i] != '\0'; i++) {
        if (eh_vogal(bairro[i]))
            strncat(senha, &bairro[i], 1);
    }

    // Convertendo para maiúsculas
    for (int i = 0; senha[i] != '\0'; i++) {
        senha[i] = toupper(senha[i]);
    }

    printf("Senha gerada: %s\n", senha);
}
