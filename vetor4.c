#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função que preenche vetor com valores aleatórios entre 0 e lim
void preencheVetor(int v[], int n, int lim) {
    for (int i = 0; i < n; i++) {
        v[i] = rand() % (lim + 1);
    }
}

int main() {
    int vetor[10];
    srand(time(NULL));  // inicializa gerador de números aleatórios

    preencheVetor(vetor, 10, 50);

    printf("Vetor preenchido (valores entre 0 e 50):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    return 0;
}
