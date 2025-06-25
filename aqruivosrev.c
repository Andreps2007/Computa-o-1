#include <stdio.h>
#include <stdlib.h>
#define tam 15



void calculasta(float *vetore, int taman, float *maior){
    
    *maior = 0;
    int i =0;
    for( i=0;i<taman;i++){
        if(*maior<vetore[i]){
            
            *maior=vetore[i];
        }
        
        
    }
    







}
int main()
{
   FILE *ponteiro;
   ponteiro = fopen("C:\\Users\\André\\Desktop\\André\\valores.txt","w");
   float vetor [tam],num,maiores;
 
   if (ponteiro ==NULL){
       printf("Arquivo nao encontrado");
       return 1;
   }
   for(int i =0; i<15;i++){
   printf("digite um numero:  ");
   scanf("%f",&num);
fprintf(ponteiro,"%.2f\n",num);}  
fclose(ponteiro);
ponteiro = fopen("C:\\Users\\André\\Desktop\\André\\valores.txt","r");
for(int j=0;j<tam;j++){
    fscanf(ponteiro,"%f",&vetor[j]);
    
    
}
fclose(ponteiro);
calculasta(vetor,tam,&maiores);
printf("%f",maiores);


    return 0;
    
}
