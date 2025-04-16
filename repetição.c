#include <stdio.h>
int main()
{

    int numero, maior;

    printf ("Digite um inteiro positivo (se for negativo encerra o programa): ");
    scanf("%d", &numero);
    maior=numero;
    while (numero>=0 )
    {
        printf ("Digite um inteiro positivo (se for negativo encerra o programa): ");
        scanf("%d", &numero);

    if (maior<numero)
    {
        maior= numero;
    }}
    printf("o maior numero digitado foi %d", maior);
    return 0;

}
