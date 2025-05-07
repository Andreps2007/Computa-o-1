#include <stdio.h>

int arredonda (float x)
{
    int inteiro =(int)x;
    float decimal = x - inteiro;
    if (x <=0)
    {
        if (decimal<=-0.5)
        {
            return inteiro -1;
        }
        else if(decimal== -0.5)
        {
            return inteiro -1;
        }

        else if(decimal > -0.5)
        {
            return inteiro;
        }
    }
    if (x>=0)
    {
        if(decimal>0.5)
        {
            return inteiro +1;
        }
        else if(decimal==0.5)
        {
            return inteiro +1;
        }

        else if(decimal <0.5)
        {
            return inteiro;
        }


    }
}

int main()
{
    float x;
    printf("Digite um numero real: ");
    scanf("%f", &x );
    int resultado = arredonda( x);
    printf("Arredondando %d", resultado);
    return 0;

}

