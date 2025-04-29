#include <stdio.h>

int main() {
    int i= 1,n,soma;

    
    
    printf("Digite um numero:\n");
    scanf("%d", &n);
    while(i<=n){
        soma = (i%2);
        if( soma ==0){
        printf("%d\n",i);}
        
        i++;}
        return 0; }
