#include <stdio.h>

int main()

{
    float peso;
    int idade;
    float altura;
    float imc;
 
    
    printf("digite altura (em metros): \t ");
    scanf("%f", &altura);
    printf("digite idade (em anos): \t");
    scanf("%d", &idade);
    printf("digite o peso: \t");
    scanf("%f", &peso);
    
    printf("a altura eh %f, a idade é %d e o peso eh %f!!", altura, idade, peso);
    imc = peso/(altura*altura);
    printf("o imc é %f!!", imc);
    
     return 0;
}
