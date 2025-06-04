#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[200];
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Digite uma frase:\n");
    fgets(frase, sizeof(frase), stdin);

    for (int j = 0; frase[j] != '\0'; j++) {
        char letra = tolower(frase[j]);
        if (letra == 'a') a++;
        else if (letra == 'e') e++;
        else if (letra == 'i') i++;
        else if (letra == 'o') o++;
        else if (letra == 'u') u++;
    }

    printf("a : "); for (int k = 0; k < a; k++) printf("*"); printf(" (%d)\n", a);
    printf("e : "); for (int k = 0; k < e; k++) printf("*"); printf(" (%d)\n", e);
    printf("i : "); for (int k = 0; k < i; k++) printf("*"); printf(" (%d)\n", i);
    printf("o : "); for (int k = 0; k < o; k++) printf("*"); printf(" (%d)\n", o);
    printf("u : "); for (int k = 0; k < u; k++) printf("*"); printf(" (%d)\n", u);

    return 0;
}
