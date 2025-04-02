#include <stdio.h>



int main()
{

    float oi,tchau,hora, min, seg;

    printf("Digite hora, minuto e segundo: ");
    scanf("%f %f %f", &hora, &min, &seg);
    tchau = (hora*3600 + min*60 + seg);
    oi = ( hora*60 + min + seg/60);

    if (hora>1 && min>15)
    {
        printf("Quantidade de segundos: %f\n ", tchau);

    }
    else
    {
        printf("Quantidade de minutos: %f\n", oi);

    }
    printf(" Horario : %0.0f:%0.0f:%0.0f\n", hora, min, seg);

    return 0;


}
