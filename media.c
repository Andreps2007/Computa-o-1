#include <stdio.h>

int main()
{
  float media, n1, n2, n3, N1,N2,N3;
  int i = 1, n;
  
  media = 
   printf("Diga quantas vezes vocÃª quer fazer a mÃ©dia ponderada  ");
   scanf("%d", &n);
    while (i<=n)
    {
    
        printf("Quais sao suas tres notas  ");
        scanf("%f %f %f", &n1, &n2,&n3 );
  N1= 2*n1;
  N2= 3*n2;
  N3= 5*n3;
        media =((N1+N2+N3)/10);
        printf("A sua media ponderada desses valores Ã© %f\n", media);
        printf("Essa foi a %d media de %d\n", i, n);
        i= i + 1;
    }
    return 0;
    
}
