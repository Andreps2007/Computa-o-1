#include <stdio.h>
#define BUFLEN 200

int main()
{
    FILE *arquivo;
    char nome[BUFLEN];
    arquivo = fopen("/home/aluno/teste2.txt","r+");

    if(arquivo == NULL)
    {
        printf("nao consegui achar o arquivo");
        return 1;
    }
    while(fgets(nome,BUFLEN,arquivo))
    {

        printf("%s",nome);
    }
    int resultado = fclose(arquivo);
    if(resultado==EOF)
    {
        printf("Houve um erro");
    }





    return 0;

}
