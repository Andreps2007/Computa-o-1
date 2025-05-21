#include<stdio.h>
#define TAMANHO 5
void dobra(int[], int[], int);
void imprimevetor(int[], int tamanho);


int main(){
int original[TAMANHO] = {1,4,6,7,89};
int copia[TAMANHO];
dobra(original, copia, TAMANHO);
imprimevetor(copia,TAMANHO);
return 0;
}

void dobra(int v1[],int v2[],int tam){
int i;
for(int i=0;i<tam;i++)
v2[i] = v1[i]*2;

}

void imprimevetor(int v[],int tamanho){
int i;
for(int i = 0; i<tamanho;i++)
printf("%5d", v[i]);}
