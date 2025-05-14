#include<stdio.h>
void contagem( int total,int *sec, int *min, int *horas);
int main()
{
    int horas,min, sec;
    printf("Digite a quantidade de segundos:  ");
    scanf("%d", &sec);
    contagem( total, &sec, &min, &horas);

    printf("a quantidade de horas e %d\n", horas);
    printf("a quantidade de minutos e %d\n", min);
    printf("a quantidade de segundos e %d\n", sec);


    return 0;

}
void contagem(int total, int *sec, int *min, int *horas)
{

    *horas= total/3600;
    *min= (total%3600)/60;
    *sec = total % 60;
}
