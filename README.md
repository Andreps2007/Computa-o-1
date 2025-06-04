
include <stdio.h>

void imprimeDireto(int v[], int n) {
    printf("Vetor (ordem direta): ");Add commentMore actions
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void imprimeInverso(int v[], int n) {
    printf("Vetor (ordem inversa): ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int vetor[] = {5, 10, 15, 20, 25, 30};

    imprimeDireto(vetor, 6);
    imprimeInverso(vetor, 6);

    return 0;
