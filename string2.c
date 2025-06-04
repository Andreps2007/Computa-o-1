#include <stdio.h>
#include <string.h>

void intercalar_frases(char f1[], char f2[]) {
    char *palavras1[50], *palavras2[50], resultado[200] = "";
    int n1 = 0, n2 = 0;

    char *token = strtok(f1, " ");
    while (token) {
        palavras1[n1++] = token;
        token = strtok(NULL, " ");
    }

    token = strtok(f2, " ");
    while (token) {
        palavras2[n2++] = token;
        token = strtok(NULL, " ");
    }

    int max = n1 > n2 ? n1 : n2;
    for (int i = 0; i < max; i++) {
        if (i < n1) {
            strcat(resultado, palavras1[i]);
            strcat(resultado, " ");
        }
        if (i < n2) {
            strcat(resultado, palavras2[i]);
            strcat(resultado, " ");
        }
    }

    printf("Frase intercalada: %s\n", resultado);
}
