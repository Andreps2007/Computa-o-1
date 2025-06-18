#include<stdio.h>

int main()
{
    float valor,soma;
    FILE *arquivo2;
    soma=0.0;

    arquivo2=fopen("/home/aluno/teste3.txt","r+");
    if (arquivo2 ==NULL)
    {

        printf("nao achou o aqruivo");
        return 1;
    }


    while (fscanf(arquivo2, "%f", &valor) == 1)
    {
        soma = soma + valor;
        printf("  Lido: %.1f , valor);


    }
        printf ("%.1f",soma);

    int resultado = fclose(arquivo2);
    if(resultado==EOF)
    {
        printf("Houve um erro");
    }


    return 0;
}
