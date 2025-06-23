#include <stdio.h>
#include<stdlib.h>
#include<time.h>



#define n 5
void preenchevetores(int vetor1[n],int vetor2[n]){
 srand(time(NULL));
    for(int i =0;i<n;i++){
        vetor1[i] =rand()%100 ;
    }
     for(int j =0;j<n;j++){
        vetor2[j] =rand()%100 ;
    }}
    void mostraVetores(int vetor1[n], int vetor2[n]) {
    printf("Vetor 1: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor1[i]);
    }
    printf("\n");

    printf("Vetor 2: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");
}

    void soma(int vetor1[n],int vetor2[n],int resultado[n]){
    
        for(int i=0;i<n;i++){
            int j=n-1-i;
            resultado[i]=vetor1[i]+vetor2[j];
            }
        }
    void mostra( int resultado[n]){

for(int i =0; i<n;i++){
    
    printf("%d  ", resultado[i]);
}}


int main(){
int vetor1[n], vetor2[n], resultado[n];
     preenchevetores(vetor1, vetor2);
    mostraVetores( vetor1,  vetor2);
     soma( vetor1, vetor2,resultado);
     mostra(  resultado);
    return 0 ;}
