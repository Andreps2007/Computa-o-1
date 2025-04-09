#include<stdio.h>
int main()
{
    float kma, kmg, al, gas;
    printf("Digite, em ordem, o preco do alccol, o preco da gasolina, os km/l que faz com alcool e os km/l que faz com gasolina ");
    scanf("%f %f %f %f",&al, &gas, &kma, &kmg);

    if ((kma/al)>(kmg/gas))
    {
        printf("O alcool compensa mais");

    }

    else
    {
        printf("A gasolina compensa mais");
    }

    return 0;
}

