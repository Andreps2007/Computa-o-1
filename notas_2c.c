#include <stdio.h>
int main()
{

    float n1, n2, n3, media;
    int frequencia;
    printf("Digite suas notas e sua Frequencia ");
    scanf("%f %f %f %d", &n1, &n2, &n3, &frequencia);
    media =(n1+n2+n3)/3;

    if(media>8.0 && frequencia>=75)
    {
        printf(" O estudante foi aprovado com distincao e sua media foi %.0f\n e a frequencia %d%%",media, frequencia);
    }
    else if (media>=6.0 && frequencia>=75){

        printf("O estudante foi aprovado direto e sua media foi %.0f\n e a frequencia %d%%",media, frequencia);
    }
    else if (media<6.0 && media>= 4.0 && frequencia>=75)
    {
        printf(" O estudante vai pra final e sua media foi %.0f\n e a frequencia %d%%",media, frequencia);

    }
    else if (media>=6.0 && frequencia<75)
    {
        printf(" O estudante vai pra final e sua media foi %.0f\n e a frequencia %d%%",media, frequencia);
    }
    else if (media>=4.0 && frequencia<75 && frequencia>50)
    {

        printf(" O estudante vai pra final e sua media foi %.0f\n e a frequencia %d%%",media, frequencia);
    }

    else {
    printf("Reprovado direto e sua media foi %.0f\n e a frequencia %d%%",media, frequencia);
}
return 0;
}
