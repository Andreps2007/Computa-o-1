#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void preenche(int vetor[10]);
void mostra(int vetor[10]);

int main(){
    int vetor[10];
    preenche(vetor);
    mostra(vetor);
    
    return 0;
}

void preenche(int vetor[10]){
srand(time(NULL));
for(int i=0; i<10;i++){
    vetor[i] = rand()%100;
}}

void mostra(int vetor[10]){
for(int j =0; j<10;j++){
    printf("%d  ", vetor[j]);
}}
