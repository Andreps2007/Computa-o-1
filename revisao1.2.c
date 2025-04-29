#include <stdio.h>

int main() {
    int f, ni;
    float mm, dano;
    
    printf("Digite a forca do seu personagem:\n");
    scanf("%d", &f);

    printf("Digite o nivel do seu personagem:\n");
    scanf("%d", &ni);

    printf("Digite o multtiplicador de dano:\n");
    scanf("%f", &mm);
    
    dano= f*ni*mm;
    
    if (dano>5000){
    printf ("DANO CRTICO MASSIVO");}
      else if (dano<=5000 && dano>=1000){
    printf ("DANO CRiTICO");}
else{
    printf( "Dano normal");
}
return 0; }
