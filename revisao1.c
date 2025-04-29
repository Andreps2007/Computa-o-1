#include<stdio.h>
int main(){
    
    float p, p2, a,b ,al;
    printf("Informe a base do quarto (em metros)\n");
    scanf("%f", &b);
    printf("Informe a alturado quarto (em metros)\n");
    scanf("%f", &al);
    a= (b*al);
    p= (2*b + 2*al);
    p2 = ((2*b + 2*al)-0.8);
    printf( "O perímetro total é %.2f\n", p);
    printf( "A area total é %.2f\n", a);
    printf( "Quantidade de rodapé necessário é %.2f\n", p2);
    return 0;
}
