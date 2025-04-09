#include <stdio.h>
int main()
{
    int C,C1,C2,C3;
    printf("Digite o consumo por m3 de sua residencia ");
    scanf("%d", &C);
    C1=1*(C-10) + 7 ;
    C2=2*(C-30)+27;
    C3=5*(C-100)+ 167;


    if (10>=C)
    {
        printf("O valor a ser pago eh 7 reais");
    }
    else if (30>=C && C>10)
    {
        printf("O valor a ser pago eh %d", C1);
    }

    else if (100>=C && C>31)
    {
        printf("O valor a ser pago eh %d", C2);

    }
    else
        printf("O valor a ser pago eh %d", C3);

    return 0;
}
