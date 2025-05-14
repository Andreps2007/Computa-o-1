#include <stdio.h>

void diferenca(int dia, int mes, int* dias);

int main() {
    int dia1, dia2, mes1, mes2, diferenca1, diferenca2;

    printf("Informe o primeiro dia: ");
    scanf("%d", &dia1);
    printf("Informe o primeiro mes: ");
    scanf("%d", &mes1);
    printf("Informe o segundo dia:  ");
    scanf("%d", &dia2);
    printf("Informe o segundo mes: ");
    scanf("%d", &mes2);
    printf("As diferenças são:\n");

    diferenca(dia1, mes1, &diferenca1);
    printf("%d para %d/%02d\n", diferenca1, dia1, mes1);

    diferenca(dia2, mes2, &diferenca2);
    printf("%d para %d/%02d\n", diferenca2, dia2, mes2);

    return 0;
}

void diferenca(int dia, int mes, int* dias) {
    *dias = 0;

    int meses[12] = {31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};

    for (int i = 0; i < mes - 1; i++) {
        *dias += meses[i];
    }

    *dias += dia;
}
