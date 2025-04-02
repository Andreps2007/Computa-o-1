#include <stdio.h>
int main(){

int hora, min, seg;


printf("Digite hora, minuto e segundo: ");
scanf("%d %d %d", &hora, &min, &seg);

if (hora>1 && min>15){
    printf("Quantidade de segundos: %d\n", min*60);
}
else{
    printf("Quantidade de minutos: %d\n", min);
}

printf("Horario : %02d:%02d:%02d\n", hora, min, seg);

return 0;
}
