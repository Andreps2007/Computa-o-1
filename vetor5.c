#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void preencheVetor(int v[], int n, int min, int max) {
    for (int i = 0; i < n; i++) {
        v[i] = min + rand() % (max - min + 1);
    }
}

int main() {
    int vetor[10];
    srand(time(NULL));

    preencheVetor(vetor, 10, 20, 30);

    printf("Vetor preenchido (valores entre 20 e 30):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    return 0;
}
