#include <stdio.h>
#define N 5
#include <stdlib.h>
#include <time.h>

#define MAX 99


void embaralha(int *vetor, int tamanho) {
    for (int i = tamanho - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
    }
}


void preenchebingo(int m[N][N]) {
    int numeros[MAX];
    int i, j, k = 0;


    for (i = 0; i < MAX; i++) {
        numeros[i] = i + 1;
    }

    srand(time(NULL));
    embaralha(numeros, MAX);

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            m[i][j] = numeros[k++];
        }
    }
}


void imprimematriz(int m[N][N], int nl, int nc){

for(nl=0;nl<N;nl++){

for(nc=0;nc<N;nc++){

printf("%4d",m[nl][nc]);}

printf("\n");
}}




int main(){
int nl,nc,m[N][N];
preenchebingo(m);
imprimematriz(m,nl,nc);


return 0;}
