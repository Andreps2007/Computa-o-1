#include <stdio.h>
#include <string.h>

int main() {
    char frase1[200], frase2[200];
    char resultado[400] = "";
    char *palavra1, *palavra2;

    printf("Digite a primeira frase:\n");
    fgets(frase1, sizeof(frase1), stdin);
    frase1[strcspn(frase1, "\n")] = '\0'; // remove o \n do final

    printf("Digite a segunda frase:\n");
    fgets(frase2, sizeof(frase2), stdin);
    frase2[strcspn(frase2, "\n")] = '\0';

    palavra1 = strtok(frase1, " ");
    palavra2 = strtok(frase2, " ");

    while (palavra1 != NULL || palavra2 != NULL) {
        if (palavra1 != NULL) {
            strcat(resultado, palavra1);
            strcat(resultado, " ");
            palavra1 = strtok(NULL, " ");
        }
        if (palavra2 != NULL) {
            strcat(resultado, palavra2);
            strcat(resultado, " ");
            palavra2 = strtok(NULL, " ");
        }
    }

    printf("Frase intercalada:\n%s\n", resultado);
    return 0;
}
