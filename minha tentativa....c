#include <stdio.h>
#define N 5
#include <stdlib.h>
#include <time.h>


void preenchebingo(int m[N][N], int nl, int nc){
srand(time(NULL));

for(nl=0;nl<N;nl++){

for(nc=0;nc<N;nc++){

 m[nl][nc] = rand()%100;}


}}

void imprimematriz(int m[N][N], int nl, int nc){

for(nl=0;nl<N;nl++){

for(nc=0;nc<N;nc++){

printf("%5d",m[nl][nc]);}

printf("\n");
}}
