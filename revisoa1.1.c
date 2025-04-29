#include <stdio.h>

int main() {
    int d, min, sec;
    int total_seg, ritmo_seg;
    int min2, sec2;

    printf("Informe a distancia que percorreu (em km):\n");
    scanf("%d", &d);

    printf("Informe em quantos minutos voce percorreu:\n");
    scanf("%d", &min);

    printf("Informe em quantos segundos voce percorreu:\n");
    scanf("%d", &sec);

   
    total_seg = min * 60 + sec;

  
    ritmo_seg = total_seg / d;

    min2 = ritmo_seg / 60;
    sec2 = ritmo_seg % 60;

    printf("Seu ritmo foi de %d minutos e %d segundos por quilômetro.\n", min2, sec2);

    return 0;
}
