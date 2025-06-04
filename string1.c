#include <stdio.h>
#include <ctype.h>
#include <string.h>

void contar_vogais(char frase[]) {
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    for (int j = 0; frase[j] != '\0'; j++) {
        char c = tolower(frase[j]);
        if (c == 'a') a++;
        else if (c == 'e') e++;
        else if (c == 'i') i++;
        else if (c == 'o') o++;
        else if (c == 'u') u++;
    }

    printf("a : ");
    for (int j = 0; j < a; j++) printf("*");
    printf(" (%d)\n", a);

    printf("e : ");
    for (int j = 0; j < e; j++) printf("*");
    printf(" (%d)\n", e);

    printf("i : ");
    for (int j = 0; j < i; j++) printf("*");
    printf(" (%d)\n", i);

    printf("o : ");
    for (int j = 0; j < o; j++) printf("*");
    printf(" (%d)\n", o);

    printf("u : ");
    for (int j = 0; j < u; j++) printf("*");
    printf(" (%d)\n", u);
}
