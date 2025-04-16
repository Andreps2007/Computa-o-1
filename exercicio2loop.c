#include <stdio.h>
int main()
{

    int  i;
    float media, soma,positivo,numero;
    i = 0;
    soma=0;


    printf ("Digite um numero inteiro : ");
    scanf("%f", &numero);

    while (numero !=-1000 )
    {
        if(numero>0)

        {
            soma= soma+ numero;
            i++;
        }
        printf ("Digite um numero inteiro : ");
        scanf("%f", &numero);



    }
    media = soma/i;


    printf ("o codigo acabou é a media dos positivos é %.1f", media);


    return 0;

}
